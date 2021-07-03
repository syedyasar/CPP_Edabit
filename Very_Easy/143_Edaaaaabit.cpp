/*
Source: Edabit
Link : https://edabit.com/challenge/b3xpBqC7BNw6rBQpo
Date: 07/02/2021

Edaaaaabit
===============

Write a function that takes an integer and returns a string with the given number of "a"s in Edabit.

Examples
howManyTimes(5) ? "Edaaaaabit"

howManyTimes(0) ? "Edbit"

howManyTimes(12) ? "Edaaaaaaaaaaaabit"
Notes
The string must start with "Ed" and end with "bit".
You'll only be given integers as test input.
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string howManyTimes(int n) {
	return "Ed" + string(n,'a')   +"bit" ;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
