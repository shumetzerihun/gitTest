/*
 * main.cpp
 *
 *  Created on: Jan 31, 2018
 *      Author: shumet
 *      composition
 */

#include <iostream>
#include <string>
#include "people.h"
#include "birthday.h"

using namespace std;

int main(){

	Birthday bd1(20, 12, 1984);
	Birthday bd2(2, 2, 1954);

	People people1("SHUMET", bd1);
	People people2("Mr X", bd2);

	people1.printPeople();
	people2.printPeople();

	return 0;
}


