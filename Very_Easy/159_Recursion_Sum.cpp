/*
Source: Edabit
Link : https://edabit.com/challenge/8cvYaiCKCTNthveyb
Date: 07/02/2021

Recursion: Sum
===============

Write a function that finds the sum of the first n natural numbers. Make your function recursive.

Examples
sum(5) ? 15
// 1 + 2 + 3 + 4 + 5 = 15

sum(1) ? 1

sum(12) ? 78
Notes
Assume the input number is always positive.
Check the Resources tab for info on recursion.
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int sum(int n) {
	if(n==1) return 1;
	else return n + sum(n-1);
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
