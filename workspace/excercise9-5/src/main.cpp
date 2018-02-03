/*
 * main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: shumet
 *     file handling
 */

#include <iostream>
#include <fstream>
using namespace std;

int main(){

	ofstream shumetsFile;
	shumetsFile.open("tuna.txt");

	shumetsFile<<"I love tuna and tuna loves me \n";
	shumetsFile.close();

	ofstream shumetsFile2("tuna2.txt");

	if(shumetsFile2.is_open())
		cout<<"File is open"<<endl;
	else
		cout<<"File not opened"<<endl;

	shumetsFile2<<"I still love tuna \n";

	shumetsFile2.close();

	return 0;
}
