/*
Source: Edabit
Link : https://edabit.com/challenge/N5P6d6CipYyDg9w2M
Date: 07/04/2021

Find the Smallest and Biggest Numbers
=======================================

Create a function that takes an array of numbers and return both the minimum and maximum numbers, in that order.

Examples
minMax([1, 2, 3, 4, 5]) ? [1, 5]

minMax([2334454, 5]) ? [5, 2334454]

minMax([1]) ? [1, 1]
Notes
All test arrays will have at least one element and are valid.
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<float> minMax(vector<float> a) {
	vector<float> b= {a[0],a[1]};
	for(int i=1;i<a.size();i++){
		if(a[i]<b[0]) b[0]=a[i];
		if(a[i]>b[1]) b[1]=a[i];	
	}
	return b;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
