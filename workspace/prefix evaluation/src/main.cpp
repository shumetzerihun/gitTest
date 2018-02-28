/*
 * main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: shumet
 *		stack implementation-procedural method
 */

#include <string>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int stack[2048] = {0};
int sp = 0;

void push(int value){
	stack[sp++] = value;//cout<<value;
}

int pop(){
	return stack[--sp];
}

int main(void) {

	string expression = {"- 10 + 3 + -2 * 4 + -9 -8"};
	//int x = stoi("-2");

	istringstream ss(expression);
	string token;

	vector<string> vectorToken;
	while(getline(ss, token, ' ')) {
		vectorToken.push_back(token);
	}
	int op;

	//cout<<vectorToken.size();
	for (int i = vectorToken.size() - 1; i >= 0; i--){
		if (vectorToken[i].size() == 1 &&  isdigit(vectorToken[i][0]))
			push(vectorToken[i][0] - 48);
		else if (vectorToken[i].size() > 1)    //either negative numbers or multiple-digit integers
			push(stoi(vectorToken[i]));
		else
			switch (vectorToken[i][0]){
			case '+':
				op = pop() + pop(); //cout<<op<<endl;
				push(op);
				break;
			case '-':
				op = pop() - pop(); //cout<<op<<endl;
				push(op);
				break;
			case '*':
				op = pop() * pop();
				push (op);
				break;
			}
	}

	cout<<pop()<<endl;

	/*for (int i = expression.size() - 1; i >= 0; i--){

		if (isdigit(expression[i])){
			push(expression[i] - 48);
		}

		else
			switch (expression[i]){
			case '-':
				op = pop() - pop(); //cout<<op<<endl;
				push(op);
				break;
			case '+':
				op = pop() + pop(); //cout<<op<<endl;
				push(op);
				break;
			case '*':
				op = pop() * pop();
				push (op);
				break;

			}
	}*/

	//while(sp)
		//cout<<pop()<<endl;

	return 0;
}
