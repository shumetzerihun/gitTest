/*
 * main.cpp
 *
 *  Created on: Feb 13, 2018
 *      Author: shumet
 *		test1: medium
 */

#include <iostream>
#include <iomanip>
using namespace std;

float taxOnTax(float netGift, float taxBands[][2], float bandSizeSum, int b){
	//cout<<netGift<<bandSizeSum<<endl<<bandSize<<endl<<percentage<<endl;
	static float taxPrevBands = 0;
	float percentage = taxBands[b][1]/100;
	float bandSize = taxBands[b][0];
	float tax = (netGift - bandSizeSum)*percentage;
	float taxOnTaxSum = 0;
	float giftPlusTax;
	float nextBandSizeSum = bandSizeSum + bandSize;
	do{
		taxOnTaxSum += tax;
		tax *= percentage;
	}while(tax > 10e-6);
	giftPlusTax = taxOnTaxSum + netGift;


	if (giftPlusTax > nextBandSizeSum){
		taxPrevBands += bandSize*percentage;
		b++;
		float netGiftNew = giftPlusTax;
		taxOnTax(netGiftNew, taxBands, nextBandSizeSum, b);
	}
	cout<<taxOnTaxSum<<endl;

	return taxPrevBands + taxOnTaxSum;
}


float taxInBand(float taxBands[][2], float income, float netGift, int bands){
	float taxInBandSum = 0;
	float taxOnTaxSum = 0;
	float bandSizeSum = taxBands[0][0];
	for (int b = 0; b < bands; b++){
		float bandSize1 = taxBands[b][0], bandSize2 = taxBands[b+1][0], percentage = taxBands[b][1]/100;
		if (netGift > bandSizeSum){
			taxInBandSum += bandSize1*percentage;
			bandSizeSum += bandSize2;
		}
		else {
		bandSizeSum -=  bandSize1;
		taxOnTaxSum = taxOnTax(netGift, taxBands, bandSizeSum, b);
		break;
		}
	}


	return taxOnTaxSum + taxInBandSum;
}


int main(void) {

	int B, F;
	float P;
	//float taxBandsSizePercentage[B][2], friendsIncomeNet[F][2];

	cout<<"Enter data: "<<endl;

	cin>>B;
	float taxBandsSizePercentage[B][2];
	for (int b = 0; b < B; b++){
		for (int i = 0; i < 2; i++)
			cin>>taxBandsSizePercentage[b][i];
	}

	cin>>P;
	cin>>F;
	float friendsIncomeNet[F][2];

	for(int f = 0; f < F; f++){
		for (int j = 0; j < 2; j++)
			cin>>friendsIncomeNet[f][j];
	}

	for (int f = 0; f < F; f++){
		float income = friendsIncomeNet[f][0];
		float netGift = friendsIncomeNet[f][1];
		cout <<taxInBand(taxBandsSizePercentage, income, netGift, B)<<endl;
	}



	return 0;
}
