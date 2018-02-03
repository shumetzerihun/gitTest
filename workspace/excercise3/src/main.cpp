/*
 * main.cpp
 *
 *  Created on: Jan 31, 2018
 *      Author: shumet
 *      friend functions
 */


#include <iostream>
#include <string>

using namespace std;


class FriendClass{
	int age;
public:
	FriendClass(int a):age(a){}
	~FriendClass(){}
friend void printAge(FriendClass a);
};


void printAge(FriendClass x){

	x.age = 38;
	cout<<x.age;
}

int main(){

	FriendClass bb(87);
	printAge(bb);

	return 0;
}


