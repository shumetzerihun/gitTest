/*
 * main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: shumet
 *    reading from custom file structure
 */

#include <iostream>
#include <fstream>
using namespace std;

int main(){

	ifstream theFile("myFile.txt");
	string str;

	while (getline (theFile, str)){
		cout<<str<<endl;
	}

	theFile.close();

	return 0;
}
