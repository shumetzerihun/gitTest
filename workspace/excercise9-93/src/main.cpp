/*
 * main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: shumet
 *		data sorting
 */
#include <iostream>
#include <string>
using namespace std;

int main() {

	int auxiliary;
	bool swapMade;
	int numOfElements;

	cout <<"How many members in the array: "; cin>>numOfElements;


	int *myArray = new int[numOfElements];

	for (int i = 0; i < numOfElements; i++){
		cout<<"Enter #"<<i+1<<": ";
		cin>>myArray[i];
	}
	do{
		swapMade = false;
	for (int i = 0; i < numOfElements - 1; i++){
		if (myArray[i] > myArray[i + 1]){
			swapMade = true;
			auxiliary = myArray[i];
			myArray[i] = myArray[i + 1];
			myArray[i + 1] = auxiliary;
		}
	}
	}while(swapMade);

	cout <<"Sorted array increasing order: ";
	for (int i = 0; i < numOfElements; i++){
		cout<<myArray[i]<<"  ";
	}

	return 0;
}
