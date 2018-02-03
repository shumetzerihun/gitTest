#include <iostream>
#include <string>
#include "shape.h"

using namespace std;

Box::Box(double len, double bred, double heig):length(len), bredth(bred), height(heig){
	cout<<"Box object being created..."<<endl;
	//length = len; bredth = bred; height = heig;
}
Box::~Box(){
	cout<<"Box object being destroyed..."<<endl;
}
void Box::setLength(double len){
	length = len;}
void Box::setBredth(double bred){
	bredth = bred;}
void Box::setHeight(double heig){
	height = heig;}
double Box::getVolume(void) {
         return length * bredth * height;}      

Cylinder::Cylinder(double rad, double heig):radius(rad), height(heig){
	cout<<"Cylinder object being created..."<<endl;
	//radius = rad; height = heig;
}
Cylinder::~Cylinder(){
	cout<<"Cylinder object being destroyed..."<<endl;
}
void Cylinder::setRadius(double rad){
	radius = rad;}
void Cylinder::setHeight(double heig){
	height = heig;}
double Cylinder::getVolume(void) {
         return radius * radius * PI;}  

long fibonacci (int);
long factorial (int);

int main (){

	int n;
	Box box(0, 0, 0);
	
	box.setLength(10); box.setBredth(15); box.setHeight(20);
	cout<<"Box volume = "<<box.getVolume()<<endl;

	Cylinder cylinder(0, 0);
	cylinder.setRadius(6); cylinder.setHeight(19);
	cout<<"Cylinder Volume = "<<cylinder.getVolume()<<endl;	

	cout<<"Enter n:"; cin>>n;
	
	cout<<"fibonacci ("<<n<<") = "<<fibonacci(n)<<endl;
	cout<<"factorial ("<<n<<") = "<<factorial(n)<<endl;

	

return 0;
}


long fibonacci (int n){

	if (n == 1)
		return 0;
	if (n == 2)
		return 1;
	else {
		return fibonacci(n-2) + fibonacci(n-1);
	}
} 


long factorial (int n){

	if (n == 0)
		return 1;
	else {
		return n*factorial(n-1);
	}
} 


