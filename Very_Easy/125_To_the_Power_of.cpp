/*
Source: Edabit
Link : https://edabit.com/challenge/Dk6bQ3f9CzuJBWTpu
Date: 07/02/2021

To the Power of _____
========================


Create a function that takes a base number and an exponent number and returns the calculation.

Examples
calculateExponent(5, 5) ? 3125

calculateExponent(10, 10) ? 10000000000

calculateExponent(3, 3) ? 27
Notes
All test inputs will be positive integers.
Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
double calculateExponent(double n1, double n2) {
	return pow(n1,n2);
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

Describe(calculate_exponent)
{
  It(test1){Assert::That(calculateExponent(5, 5), Equals(3125));}
	It(test2){Assert::That(calculateExponent(3, 3), Equals(27));}
	It(test3){Assert::That(calculateExponent(10, 10), Equals(10000000000));}
};

*/
