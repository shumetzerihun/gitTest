/*
 * main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: shumet
 *      class inheritence vs constructor/deconstructor
 */


#include <iostream>
#include <string>
using namespace std;

class Toyota {
public:
	Toyota(){
		cout<<"Toyota constructor"<<endl;
	}
	~Toyota(){
		cout<<"Toyota deconstructor"<<endl;
	}

};


class Corolla: public Toyota{
public:
	Corolla (){
		cout<<"Corolla constructor"<<endl;
	}

	~Corolla (){
			cout<<"Corolla deconstructor"<<endl;
		}
};

int main(){
	//oyota x;
	Corolla x;

	return 0;
}
