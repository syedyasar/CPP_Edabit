/*
Source: Edabit
Link : https://edabit.com/challenge/GS2Am6t3MxSBsnW4f
Date: 06/29/2021

Add the Index
===============

Given an array of numbers, create a function which returns the same array but with each element's index in the array added to itself. This means you add 0 to the number at index 0, add 1 to the number at index 1, etc...

Examples
addIndexes([0, 0, 0, 0, 0]) ? [0, 1, 2, 3, 4]

addIndexes([1, 2, 3, 4, 5]) ? [1, 3, 5, 7, 9]

addIndexes([5, 4, 3, 2, 1]) ? [5, 5, 5, 5, 5]
Notes
You'll only get numbers in the array.

*/
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
vector<int> addIndexes(vector<int> a) {
	for(int i=0;i<a.size();i++){	a[i]=a[i] + i;  }
	return a;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

addIndexes([0, 0, 0, 0, 0]) ? [0, 1, 2, 3, 4]

addIndexes([1, 2, 3, 4, 5]) ? [1, 3, 5, 7, 9]

addIndexes([5, 4, 3, 2, 1]) ? [5, 5, 5, 5, 5]

Notes

*/
