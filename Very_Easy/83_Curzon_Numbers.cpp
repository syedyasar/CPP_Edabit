/*
Source: Edabit
Link : https://edabit.com/challenge/KQf6GRWMxPL2HStkG
Date: 06/29/2021

Curzon Numbers
================

In this challenge, establish if a given integer n is a Curzon number. If 1 plus 2 ^ n is exactly divisible by 1 plus 2 * n, then n is a Curzon number.

Given a non-negative integer n, implement a function that returns true if n is a Curzon number, or false otherwise.

Examples
is_curzon(5) ? true
# 1 + 2 ^ 5  = 33
# 1 + 2 * 5  = 11
# 33 is a multiple of 11

is_curzon(10) ? false
# 1 + 2 ^ 10  = 1025
# 1 + 2 * 10 = 21
# 1025 is not a multiple of 21

is_curzon(14) ? true
# 1 + 2 ^ 14  = 16385
# 1 + 2 * 14  = 29
# 16385 is a multiple of 29
Notes
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


bool is_curzon(int n) {
	return (((1+(int)pow(2,n)))%(1+2*n)==0);
}

int main(){
	cout << is_curzon(5)    << endl;
	cout << is_curzon(10)   << endl;	
	cout << is_curzon(14)   << endl;		
	return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

is_curzon(5) ? true

is_curzon(10) ? false

is_curzon(14) ? true

Notes

*/
