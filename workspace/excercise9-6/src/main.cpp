/*
 * main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: shumet
 *    custom file structure
 */

#include <iostream>
#include <fstream>
using namespace std;

int main(){

	ofstream theFile("myFile.txt");

	if(theFile.is_open())
		cout<<"File is open"<<endl;
	else
		cout<<"File not opened"<<endl;

	int id;
	string name;
	double money;


	cout<<"Press ctrl + D to quit (linux)"<<endl;
	cout<<"Enter id, name, and money"<<endl;


	while (cin>>id>>name>>money){
		theFile<<id<<"   "<<name<<"    "<<money<<endl;
	}

	theFile.close();

	return 0;
}
