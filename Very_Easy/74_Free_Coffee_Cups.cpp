/*
Source: Edabit
Link : https://edabit.com/challenge/GzA39okcsyJEawkqe
Date: 06/29/2021


Free Coffee Cups
===================

For each of the 6 coffee cups I buy, I get a 7th cup free. In total, I get 7 cups. Create a function that takes n cups bought and return as an integer the total number of cups I would get.

Examples
totalCups(6) ? 7

totalCups(12) ? 14

totalCups(213) ? 248
Notes
Number of cups I bought + number of cups I got for free.
Only valid inputs will be given.

*/

#include <iostream>
#include<vector>
using namespace std;
int totalCups(int n) {
	return n+ n/6;
}

int main(){
	cout << totalCups(6)     << endl ;
	cout << totalCups(12)    << endl ;
	cout << totalCups(213)   << endl ;
	return 0;
}



/*

Online Compiler : https://replit.com/languages/cpp?v2=1

totalCups(6) ? 7

totalCups(12) ? 14

totalCups(213) ? 248
Notes

*/
