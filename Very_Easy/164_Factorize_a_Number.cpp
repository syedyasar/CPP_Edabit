/*
Source: Edabit
Link : https://edabit.com/challenge/LEQwcTZn7Jrega2N5
Date: 07/02/2021

Factorize a Number
====================

Create a function that takes a number as its argument and returns an array of all its factors.

Examples
factorize(12) ? [1, 2, 3, 4, 6, 12]

factorize(4) ? [1, 2, 4]

factorize(17) ? [1, 17]
Notes
The input integer will be positive.
A factor is a number that evenly divides into another number without leaving a remainder. The second example is a factor of 12, because 12 / 2 = 6, with remainder 0.
*/

#include<iostream>
#include<vector>
using namespace std;
vector<int> factorize(int n) {
	vector<int> a;
	for(int i=1;i<=n;i++)
		if(n%i==0) a.push_back(i) ;
	return a;
}



/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
