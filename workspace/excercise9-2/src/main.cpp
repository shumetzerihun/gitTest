/*
 * main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: shumet
 *      class template
 */

#include <iostream>
#include <string>
using namespace std;

template <class T>
class Shumet{
	T first, second;

public:
	Shumet(T a, T b): first(a),second(b){}
	T bigger();

};

template <class T>
T Shumet <T>::bigger(){
	return first > second ? first:second;
}

int main(){

	Shumet <double> bo(399.98, 209);
	cout<<bo.bigger()<<endl;

	return 0;
}
