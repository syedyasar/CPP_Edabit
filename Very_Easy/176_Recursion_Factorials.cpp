/*
Source: Edabit
Link : https://edabit.com/challenge/zHQmG6uZXaotLeXgh
Date: 07/04/2021

Recursion: Factorials
Write a function that calculates the factorial of a number recursively.

Examples
factorial(5) ? 120

factorial(3) ? 6

factorial(1) ? 1

factorial(0) ? 1
Notes
N/A

*/

#include<iostream>
int factorial(int n) {
	if(n==1) return 1;
	return n*factorial(n-1);
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
