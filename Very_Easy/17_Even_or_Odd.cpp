/*
Source: Edabit
Link : https://edabit.com/challenge/PiznjnvptoPuYQcjc
Date: 06/19/2021


Even or Odd?
==============

Given an array of integers, determine whether the sum of its elements is even or odd.

The return value should be a string ("odd" or "even").

If the input array is empty, consider it as an array with a zero ([0]).

Examples
evenOrOdd([0]) ? "even"

evenOrOdd([1]) ? "odd"

evenOrOdd([]) ? "even"

evenOrOdd([0, 1, 5]) ? "even"
Notes
N/A
*/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

string evenOrOdd(vector<int> a) {
	int s=0;
	for(auto x:a){
			s+=x;
	}
	if(s%2==0) return "even";
	else return "odd" ;

}


/*

evenOrOdd([0]) ? "even"

evenOrOdd([1]) ? "odd"

evenOrOdd([]) ? "even"

*/
