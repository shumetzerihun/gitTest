/*
 * main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: shumet
 *		default function parameters
 */
#include <iostream>
#include <string>
using namespace std;

	void myFunc(int &param){
		param++;
	}

	void myFunc(string str, int rep = 1){
		for (int i = 0; i < rep; i++)
			cout<<str<<endl;
	}

	 int main() {

		 int param = 1;
		 cout <<param<<endl;
		 myFunc (param);
		 cout<<param<<endl;

		myFunc("Good morning", 5);
		myFunc("Hi");
		myFunc("Hello", 1);


		 return 0;
	    }
