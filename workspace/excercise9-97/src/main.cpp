/*
 * main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: shumet
 *		stack implementation-object oriented/with base-child relationship
 */

#include <string>
#include <iostream>
using namespace std;

/**********************Base class******************************/
class Stack{
private:
	int sp;
	int stackStore[100];

public:
	Stack();
	void push(int);
	int pop();
};

Stack::Stack(){
	sp = 0;
}

void Stack::push(int value){
	stackStore[sp++] = value;
}

int Stack::pop(){
	return stackStore[--sp];
}


/************************** Subclass****************************/

class AddingStack: Stack{
private:
	int sum;
public:
	void push(int);
	int pop();
	int getSum();
	AddingStack();
};

AddingStack::AddingStack(): Stack(){
	sum = 0;
}

void AddingStack:: push(int value){
	sum += value;
	Stack::push(value);
}

int AddingStack::pop(){
	int value = Stack::pop();
	sum -= value;
	return value;
}

int AddingStack:: getSum(){
	return sum;
}

int main(void) {

	Stack stackObj;
	AddingStack addingObj;
	for (int i = 0; i < 100; i++){
		stackObj.push(i*2 + 20);
		addingObj.push(i*2 + 39);
	}

	cout<<"---------------------Stack object----------------"<<endl;
	for (int i = 0; i < 10; i++)
		cout<<stackObj.pop()<<" ";

	cout<<endl<<"---------------------AddingStack object----------------"<<endl;
	for (int i = 0; i < 10; i++)
		cout<<addingObj.pop()<<" ";

	cout<<endl<<addingObj.getSum()<<endl;


	return 0;
}
