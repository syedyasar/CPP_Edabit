/*
Source: Edabit
Link : https://edabit.com/challenge/PfSGPg2xTEHmANx6K
Date: 07/02/2021

Product of All Odd Integers
=============================

Create a function that returns the product of all odd integers in an array.

Examples
oddProduct([3, 4, 1, 1, 5]) ? 15

oddProduct([5, 5, 8, 2, 4, 32]) ? 25

oddProduct([1, 2, 1, 2, 1, 2, 1, 2]) ? 1
Notes
N/A
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int oddProduct(vector<int> a) {
	int p=1;
	for(int i=0;i<a.size();i++)
		if(a[i]&1) p*=a[i];
	return p;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
