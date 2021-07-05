/*
Source: Edabit
Link : https://edabit.com/challenge/xgLb5AHawLgoSNqm8
Date: 07/04/2021

Minimum Removals to Make Sum Even
==================================

Create a function that returns the minimum number of removals to make the sum of all elements in an array even.

Examples
minimumRemovals([1, 2, 3, 4, 5]) ? 1

minimumRemovals([5, 7, 9, 11]) ? 0

minimumRemovals([5, 7, 9, 12]) ? 1
Notes
If the sum is already even, return 0 (see example #2).
The output will be either 0 or 1.
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int minimumRemovals(vector<int> a) {
	int sum=0;
	for(int x:a) sum+=x;
	if(sum%2==0) return 0;
	else return 1;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
