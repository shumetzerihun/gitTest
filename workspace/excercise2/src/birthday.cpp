/*
 * birthday.cpp
 *
 *  Created on: Jan 31, 2018
 *      Author: shumet
 */

#include <iostream>
#include <string>
#include "birthday.h"

using namespace std;

Birthday::Birthday(int d, int m, int y): day(d), month(m), year(y){
}

Birthday::~Birthday(){}

void Birthday::printBirthday(){
	cout <<day<< "/" <<month<<"/"<<year<<endl;
}