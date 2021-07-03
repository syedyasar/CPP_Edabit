/*
Source: Edabit
Link : https://edabit.com/challenge/67LrJxQCrbN6oHoqY
Date: 06/30/2021

Four Passengers and a Driver
==============================

A typical car can hold four passengers and one driver, allowing five people to travel around. Given n number of people, return how many cars are needed to seat everyone comfortably.

Examples
carsNeeded(5) ? 1

carsNeeded(11) ? 3

carsNeeded(0) ? 0
Notes
It's likely there will be a few people left over and some cars won't be filled to max capacity.

*/

#include<iostream>
#include<vector>

using namespace std;

#include<cmath>
int carsNeeded(int n) {
	return n==0 ? 0 : (n+4)/5;
}

int main(){
	cout << carsNeeded(5)    << endl;
	cout << carsNeeded(11)    << endl;	
	cout << carsNeeded(0)   << endl;	
	
	return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

carsNeeded(5) ? 1

carsNeeded(11) ? 3

carsNeeded(0) ? 0
*/
