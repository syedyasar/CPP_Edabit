/*
Source: Edabit
Link : https://edabit.com/challenge/pJ2NGzFtsrbbGNfFA
Date: 07/02/2021

Check String for Spaces
==========================

Create a function that returns true if a string contains any spaces.

Examples
hasSpaces("hello") ? false

hasSpaces("hello, world") ? true

hasSpaces(" ") ? true

hasSpaces("") ? false

hasSpaces(",./!@#") ? false
Notes
An empty string does not contain any spaces.
Try doing this without RegEx.
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool hasSpaces(string s) {
	for(char x:s)
		if(x==' ') return 1;
	return 0;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
