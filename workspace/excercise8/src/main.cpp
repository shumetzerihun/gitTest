/*
 * main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: shumet
 *      class inheritence vs polymorphism vs virtual function
 */

#include <iostream>
#include <string>
using namespace std;

class Toyota {
public:
	Toyota(){}
	virtual ~Toyota(){}
	virtual void FuelUp(void){
		cout<<"Fuel up the Toyota"<<endl;
	}

};

class Corolla: public Toyota{
public:
	Corolla(){}
	~Corolla(){}
	void FuelUp(){
		cout<<"Fuel up the Corolla with E95 "<<endl;
	}
};

class Yaris: public Toyota{
public:
	Yaris(){}
	~Yaris(){}

};

int main(){
	Corolla c;
	Yaris y;
	Toyota *t1 = &c;
	Toyota *t2 = &y;

	t1->FuelUp();
	t2->FuelUp();


	return 0;
}
