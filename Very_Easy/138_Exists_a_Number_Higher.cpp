/*
Source: Edabit
Link : https://edabit.com/challenge/mWx3wG5QLeEdELY2h
Date: 07/02/2021

Exists a Number Higher?
===========================

Write a function that returns true if there exists at least one number that is larger than or equal to n.

Examples
existsHigher([5, 3, 15, 22, 4], 10) ? true

existsHigher([1, 2, 3, 4, 5], 8) ? false

existsHigher([4, 3, 3, 3, 2, 2, 2], 4) ? true

existsHigher([], 5) ? false
Notes
Return false for an empty array [].

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool existsHigher(vector<int> a, int n) {
	for(int x:a)
		if(x>=n) return 1;
  return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
