/*
Source: Edabit
Link : https://edabit.com/challenge/yX2PQLWKbkBSibHZv
Date: 07/02/2021

How Much is True?
===================

Create a function which returns the number of true values there are in an array.

Examples
countTrue({true, false, false, true, false}) ? 2

countTrue({false, false, false, false}) ? 0

countTrue({}) ? 0
Notes
Return 0 if given an empty array.
All array items are of the type bool (true or false).

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int countTrue( vector<bool> a ) {
	int count=0;
	for(bool b:a)
		if(b) count++;
	return count;
}

/*
#include <algorithm>
int countTrue( std::vector<bool> arr ) {
	return std::count(arr.begin(), arr.end(), true);
}
*/


/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
