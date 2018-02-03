/*
 * main.cpp
 *
 *  Created on: Jan 31, 2018
 *      Author: shumet
 *      the "this" pointer
 */


#include <iostream>

using namespace std;


class Hannah {

public:
	Hannah(int a): age(a){
	}
	~Hannah(){}
	void printCrap(void){
		cout<<this<<endl;
		cout<<"age = "<<age<<endl;
		cout<<"this->age = "<<this->age<<endl;
		cout<<"(*this).age = "<<(*this).age<<endl;
	}
private:
	int age;
};


int main(){

	Hannah a(88);
	a.printCrap();
	cout<<&a<<endl;
	return 0;
}
