/*
 * project1.cpp
 *
 *  Created on: Jan 30, 2018
 *      Author: shumet
 *      classes
 */


#include <iostream>
#include <string>
#include "shape.h"

using namespace std;

int main() {

	Rectangle rectangle (29, 19);
	cout<<"Rectangle area = "<<rectangle.getArea()<<endl;

	Box box(10, 15, 20);

	/*box.setLength(10);
	box.setBredth(15);
	box.setHeight(20);*/
	cout << "Box volume = " << box.getVolume() << endl;

	Cylinder cylinder(6, 19);
	/*cylinder.setRadius(6);
	cylinder.setHeight(19);*/
	cout << "Cylinder Volume = " << cylinder.getVolume() << endl;

	Pyramid pyramid(28.9, 19.3, 20.7);
	/*pyramid.setBaseWidth(28.9);
	pyramid.setBaseLength(19.3);
	pyramid.setHeight(20.7);*/

	cout<<"Pyramid Volume = " << pyramid.getVolume() << endl;


	return 0;
}

