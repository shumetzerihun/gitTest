/*
 * people.cpp
 *
 *  Created on: Jan 31, 2018
 *      Author: shumet
 */


#include <iostream>
#include <string>
#include "people.h"
#include "birthday.h"

using namespace std;

People::People(string name, Birthday bd): name(name), dateOfBirth(bd){
}
People::~People(){}

void People::printPeople(void){
	cout <<name<<" was born on ";
	dateOfBirth.printBirthday();
}

