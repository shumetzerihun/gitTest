/*
 * main.cpp
 *
 *  Created on: Jan 31, 2018
 *      Author: shumet
 *      operator overloading
 */

#include <iostream>
using namespace std;

class Sally {
public:
	Sally(){}
	Sally(int a):age(a){}
	Sally operator+(Sally aso){
		Sally newObj;
		newObj.age = age + aso.age;
		return(newObj);
	}
	int age;
};

int main(){
	Sally a(23);
	Sally b(38);
	Sally c;

	c = a + b;
	cout<<c.age<<endl;

	return 0;
}

