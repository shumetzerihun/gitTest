/*
 * main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: shumet
 *      template specialization
 */

#include <iostream>
#include <string>
using namespace std;

template <class T>
class Shumet{
	T x;
public:
	Shumet(T x){
		cout<<x<<" is not a character"<<endl;
	}
};

template <>
class Shumet <char>{
public:
	Shumet(char x){
		cout<<x<<" is indeed a character"<<endl;
	}
};

int main(){

	Shumet <int>x1(299);
	Shumet <double>x2(299);
	Shumet <char>x3('w');

	return 0;
}
