/*
Source: Edabit
Link : https://edabit.com/challenge/w7B58ygPxSjgLRqrW
Date: 07/02/2021

Check if an Array Contains a Given Number
===========================================

Write a function to check if an array contains a particular number.

Examples
check([1, 2, 3, 4, 5], 3) ? true

check([1, 1, 2, 1, 1], 3) ? false

check([5, 5, 5, 6], 5) ? true

check([], 5) ? false
Notes
Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string Go(int n) {
	string s="";
	for(int i=1;i<=n;i++)
	   s+='-';
	return s;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

check([1, 2, 3, 4, 5], 3) ? true

check([1, 1, 2, 1, 1], 3) ? false

check([5, 5, 5, 6], 5) ? true

check([], 5) ? false

*/
