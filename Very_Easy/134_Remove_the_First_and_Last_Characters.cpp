/*
Source: Edabit
Link : https://edabit.com/challenge/Men549aAXNHN2AjXB
Date: 07/02/2021

Remove the First and Last Characters
======================================

Create a function that removes the first and last characters from a string.

Examples
removeFirstLast("hello") ? "ell"

removeFirstLast("maybe") ? "ayb"

removeFirstLast("benefit") ? "enefi"
Notes
N/A

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string removeFirstLast(string s) {
	return s.substr(1,s.size()-2);
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

removeFirstLast("hello") ? "ell"

removeFirstLast("maybe") ? "ayb"

removeFirstLast("benefit") ? "enefi"

*/
