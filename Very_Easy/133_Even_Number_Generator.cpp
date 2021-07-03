/*
Source: Edabit
Link : https://edabit.com/challenge/imnBswgSBMQhYLuxj
Date: 07/02/2021

Even Number Generator
=======================

Create a function that finds all even numbers from 1 to the given number.

Examples
findEvenNums(8) ? [2, 4, 6, 8]

findEvenNums(4) ? [2, 4]

findEvenNums(2) ? [2]
Notes
If there are no even numbers, return an empty array.
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> findEvenNums(int n) {
	vector<int> a;
	for(int i=2;i<=n;i=i+2)
		a.push_back(i);
	return a;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

findEvenNums(8) ? [2, 4, 6, 8]

findEvenNums(4) ? [2, 4]

findEvenNums(2) ? [2]

*/
