/*
Source: Edabit
Link : https://edabit.com/challenge/BYcqLjHvaEHDbdSdC
Date: 06/30/2021

Mirror Array
==============

Given an integer array, transform that array into a mirror.

Examples
mirror([0, 2, 4, 6]) ? [0, 2, 4, 6, 4, 2, 0]

mirror([1, 2, 3, 4, 5]) ? [1, 2, 3, 4, 5, 4, 3, 2, 1]

mirror([3, 5, 6, 7, 8]) ? [3, 5, 6, 7, 8, 7, 6, 5, 3]
Notes
Do not repeat the last item of the given array.


*/

#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;

vector<int> mirror(vector<int> a) {
	int s=a.size()-2;
	for(int i=s;i>=0;i--)	{
		a.push_back(a[i]);
	}
	return a;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

mirror([0, 2, 4, 6]) ? [0, 2, 4, 6, 4, 2, 0]

mirror([1, 2, 3, 4, 5]) ? [1, 2, 3, 4, 5, 4, 3, 2, 1]

mirror([3, 5, 6, 7, 8]) ? [3, 5, 6, 7, 8, 7, 6, 5, 3]
Notes

*/
