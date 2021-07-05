/*
Source: Edabit
Link : https://edabit.com/challenge/AiwZt3zrTqKCZPib2
Date: 07/05/2021

Valid Variable Names
=======================

When creating variables, the variable name must always start with a letter and cannot contain spaces, though numbers and underscores are allowed to be contained in it also.

Create a function which returns true if a given variable name is valid, otherwise return false.

Examples
variableValid("result") ? true

variableValid("odd_nums") ? true

variableValid("2TimesN") ? false
Notes
Inputs are given as strings.
Variable names with spaces are not allowed.
Although this question may seem like otherwise, you can't actually assign words with quotes around them as variables.
*/
#include <iostream>
using namespace std;
bool variableValid(string v) {
	if((v[0]<=90 && v[0]>=65 )|| (v[0]>=97 && v[0]<=122)){;}
	else return false;
	for(char x:v){
		if(x==' ') return false;
	}
	return true;
}

/*


Online Compiler : https://replit.com/languages/cpp?v2=1


*/
