/*
 * birthday.h
 *
 *  Created on: Jan 31, 2018
 *      Author: shumet
 */

#ifndef BIRTHDAY_H_
#define BIRTHDAY_H_

using namespace std;

class Birthday{
private:
	int day;
	int month;
	int year;
public:
	void printBirthday(void);
	Birthday(int, int, int);
	~Birthday();
};



#endif /* BIRTHDAY_H_ */
