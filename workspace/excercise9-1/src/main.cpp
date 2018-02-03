/*
 * main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: shumet
 *      function template - generic data types - helps work with different types of data
 */

#include <iostream>
#include <string>
using namespace std;

template <class FIRST, class SECOND>

SECOND calculator (FIRST x, SECOND y){
	return x+y;
}

template <class FIRST, class SECOND>

SECOND smaller(FIRST x, SECOND y){

		return (x<y ? x:y);
}

int main(){

	int x = 272;
	double y = 270.998;

	cout<<calculator(x, y) <<endl;

	cout<<smaller(x, y)<<endl;

	return 0;
}
