/*
Source: Edabit
Link : https://edabit.com/challenge/HbPndPmr65gqYMdtZ
Date: 06/19/2021

Find Out the Leap Year
========================

A leap year happens every four years, so it's a year that is perfectly divisible by four. However, if the year is a multiple of 100 (1800, 1900, etc), the year must be divisible by 400.

Write a function that determines if the year is a leap year or not.

Examples
leapYear(2020) ? true

leapYear(2021) ? false

leapYear(1968) ? true
Notes
N/A

*/

#include <iostream>
//#include <string>
//#include<vector>
//#include <algorithm>
using namespace std;
bool leapYear(int year) {
	return (year%4==0 && year%100!=0) || (year%400==0) ;
}

int main(){
	cout << leapYear(2020)   << endl;
	cout << leapYear(2021)   << endl;
	cout << leapYear(1968)   << endl;
}

/*
leapYear(2020) ? true

leapYear(2021) ? false

leapYear(1968) ? true

*/
