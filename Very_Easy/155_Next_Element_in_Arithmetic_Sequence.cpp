/*
Source: Edabit
Link : https://edabit.com/challenge/e8AmLPceYWtP852Hk
Date: 07/02/2021

Next Element in Arithmetic Sequence
====================================

Create a function that returns the next element in an arithmetic sequence. In an arithmetic sequence, each element is formed by adding the same constant to the previous element.

Examples
nextElement([3, 5, 7, 9]) ? 11

nextElement([-5, -6, -7]) ? -8

nextElement([2, 2, 2, 2, 2]) ? 2
Notes
All input arrays will contain integers only.
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int nextElement(vector<int> a) {
	return a[a.size()-1] + a[1]-a[0];
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
