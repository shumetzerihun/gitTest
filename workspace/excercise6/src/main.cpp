/*
 * main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: shumet
 *      class inheritance: protected vs private vs public memnbers
 */


#include <iostream>
#include <string>
using namespace std;

class Toyota {
protected:
	int protectedv;
public:
	int publicv;
private:
	int privatev;

};


class Corolla: public Toyota{
public:
	void doSomething(void){
		//protectedv = 18;
		//publicv = 10;
		//privatev = 88;
	}
};

int main(){
	Corolla x;
	x.doSomething();

	return 0;
}
