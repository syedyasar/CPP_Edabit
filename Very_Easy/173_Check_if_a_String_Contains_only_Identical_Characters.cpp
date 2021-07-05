/*
Source: Edabit
Link : https://edabit.com/challenge/8NQyQeuLCyjchjPkD
Date: 07/04/2021

Check if a String Contains only Identical Characters
======================================================

Write a function that returns true if all characters in a string are identical and false otherwise.

Examples
isIdentical("aaaaaa") ? true

isIdentical("aabaaa") ? false

isIdentical("ccccca") ? false

isIdentical("kk") ? true
Notes
N/A

*/

#include<iostream>
#include<vector>
using namespace std;
bool isIdentical(string a) {
	for(int i=1;a[i]!='\0';i++)
		if(a[i]!=a[i-1]) return 0;
	return 1;
}



/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
