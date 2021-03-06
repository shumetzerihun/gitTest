/*
 * shape.cpp
 *
 *  Created on: Jan 30, 2018
 *      Author: shumet
 */


#include <iostream>
#include <string>
#include "shape.h"

using namespace std;
#define PI 3.14

Rectangle::Rectangle(int len, int wid):length(len), width(wid){
}
Rectangle::~Rectangle(){
}
void Rectangle::setLength(int len) {
	length = len;
}
void Rectangle::setWidth(int wid) {
	width = wid;
}
int Rectangle::getLength(void){
	return length;
}
int Rectangle::getwidth(void){
	return width;
}
int Rectangle::getArea(void){
	return length * width;
}

Box::Box(double len, double bred, double heig):length(len), bredth(bred), height (heig) {
	//cout << "Box object being created..." << endl;
}
Box::~Box() {
	//cout << "Box object being destroyed..." << endl;
}
void Box::setLength(double len) {
	length = len;
}
void Box::setBredth(double bred) {
	bredth = bred;
}
void Box::setHeight(double heig) {
	height = heig;
}
double Box::getVolume(void) {
	return length * bredth * height;
}

Cylinder::Cylinder(double rad, double heig): radius (rad), height (heig) {
	//cout << "Cylinder object being created..." << endl;
}
Cylinder::~Cylinder() {
	//cout << "Cylinder object being destroyed..." << endl;
}
void Cylinder::setRadius(double rad) {
	radius = rad;
}
void Cylinder::setHeight(double heig) {
	height = heig;
}
double Cylinder::getVolume(void) {
	return radius * radius * PI;
}

Pyramid::Pyramid(double bWid, double bLen, double heig): baseWidth (bWid), baseLength (bLen), height (heig) {
	//cout << "Pyramid object being created..." << endl;
}

Pyramid::~Pyramid() {
	//cout << "Pyramid object being destroyed..." << endl;
}
void Pyramid::setBaseWidth(double bWid){
	baseWidth = bWid;
}
void Pyramid::setBaseLength(double bLen){
	baseLength = bLen;
};
void Pyramid::setHeight(double heig) {
	height = heig;
}
double Pyramid::getVolume(void){
	return 1.0/3 * baseWidth * baseLength * height;
}


