/*
Source: Edabit
Link : https://edabit.com/challenge/M6LcgdrFPsxmawDY6
Date: 07/02/2021

Find the Index
================

Create a function that takes an array and a string as arguments and return the index of the string.

Examples
findIndex(["hi", "edabit", "fgh", "abc"], "fgh") ? 2

findIndex(["Red", "blue", "Blue", "Green"], "blue") ? 1

findIndex(["a", "g", "y", "d"], "d") ? 3

findIndex(["Pineapple", "Orange", "Grape", "Apple"], "Pineapple") ? 0
Notes
Don't forget to return the result.
If you are stuck, find help in the Resources tab.
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int findIndex(vector<string> a, string s) {
	for(int i=0;i<a.size();i++)
		if(s==a[i]) return i;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1

Describe(find_index_tests)
{
	It(test1){Assert::That(findIndex({"abc", "ghj", "banana", "grape"}, "grape"), Equals(3));}
	It(test2){Assert::That(findIndex({"a", "b", "c", "d", "e", "f"}, "f"), Equals(5));}
	It(test3){Assert::That(findIndex({"hi", "edabit.com", "testcase", "validstring"}, "edabit.com"), Equals(1));}
};
*/
