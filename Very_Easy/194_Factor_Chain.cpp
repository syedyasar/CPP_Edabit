/*
Source: Edabit
Link : https://edabit.com/challenge/D9PNJ9mzosxjs22Et
Date: 07/04/2021

Factor Chain
=============

A factor chain is an array where each previous element is a factor of the next consecutive element. The following is a factor chain:

[3, 6, 12, 36]

// 3 is a factor of 6
// 6 is a factor of 12
// 12 is a factor of 36
Create a function that determines whether or not an array is a factor chain.

Examples
factorChain([1, 2, 4, 8, 16, 32]) ? true

factorChain([1, 1, 1, 1, 1, 1]) ? true

factorChain([2, 4, 6, 7, 12]) ? false

factorChain([10, 1]) ? false
Notes
N/A

*/

#include<iostream>
using namespace std;
bool factorChain(vector<int> a) {
	for(int i=a.size()-1;i>0;i--){
		if(a[i]%a[i-1]!=0) return false;
	}
	return true;
}

/*
Solution 2:


*/

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
