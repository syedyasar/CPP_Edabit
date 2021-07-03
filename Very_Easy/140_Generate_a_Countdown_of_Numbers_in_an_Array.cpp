/*
Source: Edabit
Link : https://edabit.com/challenge/GsuQDJubdxbcENTMW
Date: 07/02/2021

Generate a Countdown of Numbers in an Array
============================================

Create a function that takes a number as an argument and returns an array of numbers counting down from this number to zero.

Examples
countdown(5) ? [5, 4, 3, 2, 1, 0]

countdown(1) ? [1, 0]

countdown(0) ? [0]
Notes
The argument will always be greater than or equal to zero.
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> countdown(int s) {
	vector<int> a;
	for(int i=s;i>=0;i--)
		a.push_back(i);
	return a;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
