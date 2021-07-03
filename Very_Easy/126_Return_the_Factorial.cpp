/*
Source: Edabit
Link : https://edabit.com/challenge/AXvKYG58khpPuXoRi
Date: 07/02/2021

Return the Factorial
========================

Create a function that takes an integer and returns the factorial of that integer. That is, the integer multiplied by all positive lower integers.

Examples
factorial(3) ? 6

factorial(5) ? 120

factorial(13) ? 6227020800
Notes
Assume all inputs are greater than or equal to 0.
*/

#include<iostream>
#include<vector>
#include<cmath>
int factorial(int n) {
	int fact=1;
	for(int i=2;i<=n;i++)
		fact*=i;
	return fact;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

Describe(factorial_tests)
{
	It(test1){Assert::That(factorial(2), Equals(2));}
	It(test2){Assert::That(factorial(6), Equals(720));}
	It(test3){Assert::That(factorial(3), Equals(6));}
	It(test4){Assert::That(factorial(12), Equals(479001600));}
	It(test5){Assert::That(factorial(5), Equals(120));}
};

*/
