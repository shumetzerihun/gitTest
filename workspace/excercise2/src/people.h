/*
 * people.h
 *
 *  Created on: Jan 31, 2018
 *      Author: shumet
 */

#include "birthday.h"
#include <string>


using namespace std;

#ifndef PEOPLE_H_
#define PEOPLE_H_

class People {
private:
	string name;
	Birthday dateOfBirth;

public:
	People(string, Birthday);
	~People();
	void printPeople(void);
};



#endif /* PEOPLE_H_ */
