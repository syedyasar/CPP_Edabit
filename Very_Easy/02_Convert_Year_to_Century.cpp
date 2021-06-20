/*
Source: Edabit
Link : https://edabit.com/challenge/wr23MEy6xPKru7XZw
Date: 06/19/2021

Convert Year to Century
==========================

Write a function that takes a year and returns its corresponding century.

Examples
centuryFromYear(2005) ? 21

centuryFromYear(1950) ? 20

centuryFromYear(1900) ? 19
Notes
For guidance on the year boundaries for each century:

The 19th century are the years from 1801 to 1900.
The 20th century are the years from 1901 to 2000.


*/

#include <iostream>
#include <string>
#include<vector>
using namespace std;

int centuryFromYear(int year) {
	int t=year/100;
	return (year%100==0) ? t : t+1;
}

int main() {
	
cout << " centuryFromYear(2005)  : " << 	centuryFromYear(2005)  << endl; // 21

cout<<   " centuryFromYear(1950)  : " <<     centuryFromYear(1950)  << endl; // 20

cout <<   " centuryFromYear(1900)  : "  <<    centuryFromYear(1900)   << endl; // 19
	
	return 0; 
}
