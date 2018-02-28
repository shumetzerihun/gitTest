/*
 * main.cpp
 *
 *  Created on: Feb 13, 2018
 *      Author: shumet
 *		Problem A: test - easy
 */

#include <iostream>
#include<iomanip>
using namespace std;


int main(void) {

	double SLminute = 0.0;
	int N;
	int sumM = 0, sumS = 0;
	cin >>N;

	int *arrayMinutes = new int[N];
	int *arraySeconds = new int[N];

	//cout<<"Enter Minutes displayed, and seconds waited separated by space:  "<<endl;
	for (int i = 0; i < N; i++){
		cin>>arrayMinutes[i]>>arraySeconds[i];
		sumM += arrayMinutes[i];
		sumS += arraySeconds[i];
	}


	SLminute = (sumS/60.0)/sumM;
	if (SLminute <= 1)
		cout<<"measurement error"<<endl;
	else
		cout<<setprecision(10)<<SLminute<<endl;


	return 0;
}
