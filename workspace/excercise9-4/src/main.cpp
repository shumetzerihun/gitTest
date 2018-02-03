/*
 * main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: shumet
 *     exceptions
 */

#include <iostream>
#include <string>
using namespace std;

int main(){

	try {
		int momsAge = 22;
		int sonsAge = 34;
		if (sonsAge > momsAge){
			throw -1;
		}

	}catch(...){

		cout<<"Son cannot be older than his mom!"<<endl;
	}

	try{
		double dividend, divisor;
		cout<<"Enter dividend: ";
		cin>>dividend;
		cout<<"Enter divisor: ";
		cin>>divisor;

		if(divisor == 0)
			throw -1;
		cout<<"Quotient = "<<(dividend/divisor)<<endl;
	}catch(int x){
		cout<<"Divisor cannot be 0! Error: "<<x<<endl;
	}

	return 0;
}
