/*
Source: Edabit
Link : https://edabit.com/challenge/bBQR4qYiLG3aEGAaT
Date: 07/01/2021

Multiply by Length
=====================

Create a function to multiply all of the values in an array by the amount of values in the given array.

Examples
multiplyByLength([2, 3, 1, 0]) ? [8, 12, 4, 0]

multiplyByLength([4, 1, 1]) ? ([12, 3, 3])

multiplyByLength([1, 0, 3, 3, 7, 2, 1]) ?  [7, 0, 21, 21, 49, 14, 7]

multiplyByLength([0]) ? ([0])
Notes
All of the values given are numbers.
All arrays will have at least one element.
Don't forget to return the result.
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> multiplyByLength(vector<int> a) {
	int l=a.size();
	for(int i=0;i<l;i++)  a[i]*=l;
	
	return a;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

multiplyByLength([2, 3, 1, 0]) ? [8, 12, 4, 0]

multiplyByLength([4, 1, 1]) ? ([12, 3, 3])

multiplyByLength([1, 0, 3, 3, 7, 2, 1]) ?  [7, 0, 21, 21, 49, 14, 7]

multiplyByLength([0]) ? ([0])

*/
