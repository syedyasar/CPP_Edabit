/*
Source: Edabit
Link : https://edabit.com/challenge/J292mbcR4x9GPDwwi
Date: 06/19/2021


After N Months...
==========================
Create a function that takes in year and months as input, then return what year it would be after n-months has elapsed.

Examples
afterNMonths(2020, 24) ? 2022

afterNMonths(1832, 2) ? 1832

afterNMonths(1444, 60) ? 1449
Notes
Assume that adding 12 months will always increment the year by 1.


*/

#include <iostream>
#include <string>
#include<vector>
using namespace std;

int afterNMonths(int year, int months) {
	return year+ (months/12) ;
}

int main() {
	
cout << " afterNMonths(2020, 24) : " << 	afterNMonths(2020, 24)  << endl; //2022
cout<<   " afterNMonths(1832, 2)  : " <<     afterNMonths(1832, 2)  << endl; // 1832
cout <<   " afterNMonths(1444, 60) : "  <<    afterNMonths(1444, 60)  << endl; // 1449
	
return 0; 
}

/*
afterNMonths(2020, 24) ? 2022

afterNMonths(1832, 2) ? 1832

afterNMonths(1444, 60) ? 1449
*/
