/*
 * main.cpp
 *
 *  Created on: Feb 17, 2018
 *      Author: Shumet
 *		Problem B: test - Medium
 */

#include <iostream>
#include<iomanip>
using namespace std;

inline double calculateTax(double taxBands[][2], double income, double netGift, int numberOfBands, double percentageAboveBands){
	double tax = 0.0;
	double taxablePart = 0.0, taxOnTax = 0.0;
	double bandUpperLimit = 0.0;
	percentageAboveBands/=100.0;
	for (int b = 0; b < numberOfBands; b++){
		double bandSize = taxBands[b][0], percentage = taxBands[b][1]/100.0;
		bandUpperLimit += bandSize;
		if (netGift + income > bandUpperLimit && bandUpperLimit - income >= 0){      //gift doesn't fit tax band
			tax += (bandUpperLimit - income >= bandSize)? bandSize*percentage : (bandUpperLimit - income)*percentage;
			if (b == numberOfBands - 1){                   //finish up tax calculation if tax goes beyond all bands
				taxablePart = (tax + income + netGift) - bandUpperLimit;
				tax += (taxablePart*percentageAboveBands)/(1 - percentageAboveBands);
			}
		}
		else if ((netGift + income <= bandUpperLimit)){           //gift fits tax band
			taxablePart = (bandUpperLimit - income >= bandSize) ? (tax + income + netGift) - (bandUpperLimit - bandSize): netGift;
			taxOnTax = (taxablePart*percentage)/(1 - percentage); //sum in geometric series for the taxable part in the band
			if ((taxOnTax + taxablePart > bandSize) || ((income - (bandUpperLimit - bandSize) + taxOnTax + taxablePart  > bandSize))){  //tax overlaps onto next band
				tax += (bandUpperLimit - income >= bandSize) ? bandSize * percentage : (bandUpperLimit - income)*percentage;   //add tax for the current band
				if (b == numberOfBands - 1){                  //finish up tax calculation if goes beyond all bands
					taxablePart = (tax + income + netGift) - bandUpperLimit;
					tax += (taxablePart * percentageAboveBands) / (1 - percentageAboveBands);
				}
			}
			else{
				tax += taxOnTax;
				break;
			}
		}
		/*else if ((b == numberOfBands - 1) && (netGift + income > bandUpperLimit)){    //gift goes beyond all bands
			taxablePart = netGift;
			tax += (taxablePart*percentageAboveBands)/(1 - percentageAboveBands);

		}*/
	}


	return tax;
}

int main(void) {

	int B;     // number of tax bands
	int F;     //number of friends
	double P;    // percentage tax on all income above other bands.

	cin>>B;

	double taxBands[B][2];

	for (int b = 0; b < B; b++){
		for (int i = 0; i < 2; i++){
			cin>>taxBands[b][i];
		}
	}
	cin>>P;
	cin>>F;

	double friends[F][2] = {0};

	for(int f = 0; f < F; f++){
		for (int j = 0; j < 2; j++)
			cin>>friends[f][j];
	}

	for (int f = 0; f < F; f++){
		double income = friends[f][0];
		double netGift = friends[f][1];
		double tax = calculateTax(taxBands, income, netGift, B, P);
		double grossGift = tax + netGift;
		cout<<fixed<<setprecision(6)<<grossGift<<endl;
	}


	return 0;
}
