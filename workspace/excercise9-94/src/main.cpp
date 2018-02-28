/*
 * main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: shumet
 *		dynamic memory allocation for array of arrays by using double pointer
 */
#include <iostream>
#include <string>
using namespace std;

int main() {

	int rows = 8;

	int **ptrArray = new int *[rows];
	for (int i = 0; i < rows; i++){
		ptrArray[i] = new int[i + 1];
		for (int j = 0; j <= i; j++)
			ptrArray[i][j] = i*2 + 3*j;
	}

	for (int i = 0; i < rows; i++){
		for (int j = 0; j <= i; j++)
			cout <<ptrArray[i][j]<<"  ";
		cout <<endl;
	}

	for (int i = 0; i < rows; i++)
			delete[] ptrArray[i];
		delete[] ptrArray;


	return 0;
}
