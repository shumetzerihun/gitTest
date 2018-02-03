/*
 * main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: shumet
 *    reading from custom file structure
 */

#include <iostream>
using namespace std;

class BaseClass {
public:
	void display (){
		cout <<"this is base class function"<<endl;
	}
};

class ChildClass: public BaseClass {

public:
	void display(){
		cout<<"This is derived class function"<<endl;
	}
};

int main(){

	BaseClass *a;
	ChildClass b;

	a = &b;
	a->display();
	b.display();


    return 0;
}
