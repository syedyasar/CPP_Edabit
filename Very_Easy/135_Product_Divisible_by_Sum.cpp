/*
Source: Edabit
Link : https://edabit.com/challenge/N2qrWH97ipNq4ef4Q
Date: 07/02/2021

Product Divisible by Sum?
==========================

Write a function that returns true if the product of a vector is divisible by the sum of that same vector. Otherwise, return false.

Examples
divisible({3, 2, 4, 2}) ? false

divisible({4, 2, 6}) ? true
// 4 * 2 * 6 / (4 + 2 + 6)

divisible({3, 5, 1}) ? false
Notes
N/A

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool divisible(vector<int> a) {
	int s=0,p=1;
	for(int i=0;i<a.size();i++){	s+=a[i];	p*=a[i] ;	}
	return  s!=0 && p%s==0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
