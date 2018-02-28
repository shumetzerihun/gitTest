/*
 * main.cpp
 *
 *  Created on: Feb 25, 2018
 *      Author: shumet
 *
 */

#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

class Tax{
private:
	int numOfTaxBands;
	vector<double> bandSize;
	vector<double> percentage;
	double percentageAboveBands;
	int numOfFriends;
	vector<double> income;
	vector<double> netGift;
	vector<double> grossGift;
	vector<double> taxFriend;
	double friendsTax;

public:
	Tax();
	~Tax();
	void getData();
	void calculateTax(int);
	void calculateGrossGift();
	bool giftNotFitBand(int, double);
	bool giftFitBand(int, double);
	void taxGiftNotFitBand(int, int, double);
	bool taxGiftFitBand(int, int, double);
};

Tax::Tax(){
	numOfTaxBands =0;
	percentageAboveBands = 0.0;
	numOfFriends = 0;
	friendsTax = 0.0;
}
Tax::~Tax(){}

void Tax::getData(){
	double bandSizeInput, percentageInput, incomeInput, netGiftInput;
	cin>>numOfTaxBands;
	for(int i = 0; i < numOfTaxBands; i++){
		cin>>bandSizeInput;
		cin>>percentageInput;
		percentageInput /= 100;
		bandSize.push_back(bandSizeInput);
		percentage.push_back(percentageInput);
	}

	cin>>percentageAboveBands;
	percentageAboveBands /= 100.0;
	cin>>numOfFriends;
	for(int j = 0; j < numOfFriends; j++){
		cin>>incomeInput;
		cin>>netGiftInput;
		income.push_back(incomeInput);
		netGift.push_back(netGiftInput);
	}
}

bool Tax::giftNotFitBand(int friendIndex, double bandUpperLimit){
	int f = friendIndex;
	return (netGift[f] + income[f] > bandUpperLimit) && (bandUpperLimit - income[f] >= 0) ? true: false;
}

bool Tax::giftFitBand(int friendIndex, double bandUpperLimit){
	int f = friendIndex;
	return (netGift[f] + income[f] <= bandUpperLimit) ? true: false;
}

void Tax::taxGiftNotFitBand(int friendIndex, int bandIndex, double bandUpperLimit){
	double taxablePart = 0.0;
	double taxOnTax = 0.0;
	int f = friendIndex, b = bandIndex;
	friendsTax += (bandUpperLimit - income[f] >= bandSize[b])? bandSize[b]*percentage[b] : (bandUpperLimit - income[f])*percentage[b];

	//finish up tax calculation if tax goes beyond all bands
	if (b == numOfTaxBands - 1){
		taxablePart = (friendsTax + income[f] + netGift[f]) - bandUpperLimit;
		taxOnTax= (taxablePart*percentageAboveBands)/(1 - percentageAboveBands);
		friendsTax += taxOnTax;
	}
}

bool Tax::taxGiftFitBand(int friendIndex, int bandIndex, double bandUpperLimit){
	int f = friendIndex, b = bandIndex;
	bool loopBreak = false;
	double taxablePart = 0.0;
	double taxOnTax = 0.0;
	taxablePart = (bandUpperLimit - income[f] >= bandSize[b]) ? (friendsTax + income[f] + netGift[f]) - (bandUpperLimit - bandSize[b]): netGift[f];

	//sum in geometric series for the taxable part in the band
	taxOnTax = (taxablePart*percentage[b])/(1 - percentage[b]);

	//if tax overlaps onto next band, add tax for the current band and move on to next band
	if ((taxOnTax + taxablePart > bandSize[b]) || ((income[f] - (bandUpperLimit - bandSize[b]) + taxOnTax + taxablePart  > bandSize[b]))){
		friendsTax += (bandUpperLimit - income[f] >= bandSize[b]) ? bandSize[b] * percentage[b] : (bandUpperLimit - income[f])*percentage[b];

		//finish up tax calculation if goes beyond all bands
		if (b == numOfTaxBands - 1){
				taxablePart = (friendsTax + income[f] + netGift[f]) - bandUpperLimit;
				friendsTax += (taxablePart * percentageAboveBands) / (1 - percentageAboveBands);
			}
		}
	else{
		friendsTax += taxOnTax;
		loopBreak = true;
	}
return loopBreak;
}

void Tax::calculateTax(int friendIndex){
	double bandUpperLimit = 0.0;
	for(int b = 0; b < numOfTaxBands; b++){
		bandUpperLimit += bandSize[b];
		if (giftNotFitBand(friendIndex, bandUpperLimit))   //this is unnecessary call for each band
			taxGiftNotFitBand(friendIndex, b, bandUpperLimit);

		else if(giftFitBand(friendIndex, bandUpperLimit)){    //this is unnecessary call for each band
			if (taxGiftFitBand(friendIndex, b, bandUpperLimit))
				break;
		}
	}
}

void Tax::calculateGrossGift(){
	double grossGiftFriend = 0.0;;
	for(int f = 0; f < numOfFriends; f++){
		friendsTax = 0.0;
		calculateTax(f);
		taxFriend.push_back(friendsTax);
		grossGiftFriend = netGift[f] + taxFriend[f];
		grossGift.push_back(grossGiftFriend);
		cout<<fixed<<setprecision(6)<<grossGift[f]<<endl;
	}

}

int main(void) {
	Tax giftTax;
	giftTax.getData();
	giftTax.calculateGrossGift();

	return 0;
}
