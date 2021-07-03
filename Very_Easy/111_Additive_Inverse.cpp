/*
Source: Edabit
Link : https://edabit.com/challenge/QAw998aLoLLLF3AAZ
Date: 07/01/2021

Additive Inverse
=================

A number added with its additive inverse equals zero. Create a function that returns an array of additive inverses.

Examples
additiveInverse([5, -7, 8, 3]) ? [-5, 7, -8, -3]

additiveInverse([1, 1, 1, 1, 1]) ? [-1, -1, -1, -1, -1]

additiveInverse([-5, -25, 35]) ? [5, 25, -35]
Notes
Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

using namespace std;
vector<int> additiveInverse(vector<int> a) {
	for(int &i:a) i=-i;
	return a;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

additiveInverse([5, -7, 8, 3]) ? [-5, 7, -8, -3]

additiveInverse([1, 1, 1, 1, 1]) ? [-1, -1, -1, -1, -1]

additiveInverse([-5, -25, 35]) ? [5, 25, -35]

*/
