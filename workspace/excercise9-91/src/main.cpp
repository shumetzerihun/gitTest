/*
 * main.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: shumet
 *    multidimensional arrays
 */

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){

//exceptions
	/*try{
	cout<<"Enter dividend"<<endl; cin>> a;
	cout <<"Enter divisor"<<endl; cin >>b;
	if (b == 0)
		throw 200;
	cout <<"Quotient = "<<a/b<<endl;
}catch(...){
	cout<<"Division by zero is illegal!!"<<endl;
}*/

	//two-dimensional array: daily temperature record
	int max = 0;
	int temp[31][24];
	for (int d = 0; d < 31; d++){
		for (int h = 0; h < 24;h++)
			temp[d][h] = rand()%40;
	}

		for (int d = 0; d < 31; d++){
			for (int h = 0; h < 24;h++){
				//cout<<temp[d][h]<<"   ";
				if (temp[d][h] > max)
					max = temp[d][h];
			}
			//cout<<endl;
		}
		cout <<"Max temp = "<<max<<endl;

		int counter0 = 0, counter1 = 0;

		int room[3][13][25];
		for (int b = 0; b < 3; b++)
			for (int f = 0; f < 13; f++)
				for (int r = 0; r < 25; r++)
					room[b][f][r] = rand() % 2;

		//three dimensional array: three 13-floor buildings each floor having 25 rooms
		for (int b = 0; b < 3; b++)
					for (int f = 0; f < 13; f++)
						for (int r = 0; r < 25; r++)
							if (room[b][f][r] == 0)
								counter0++;
							else if (room[b][f][r] == 1)
								counter1++;
		cout <<"Number of free rooms: "<<counter0<<endl;
		cout <<"Number of occupied rooms: "<<counter1<<endl;


	/*cout<<endl;

	for (int i = 0; i < 10; i++){
		tempVar = myArray[i];
		myArray[i] = myArray[19 - i];
		myArray[19 - i] = tempVar;
	}

	for (int i = 0; i < 20; i++){
		cout <<myArray[i]<<"    ";
	}
*/

    return 0;
}
