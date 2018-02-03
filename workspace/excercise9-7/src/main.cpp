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

	int id;
	string name;
	double money;

	ifstream theFile("myFile.txt");

	while (theFile>>id>>name>>money){
		cout<<id<<"           "<<name<<"           "<<money<<endl;
	}

	theFile.close();

	return 0;
}
