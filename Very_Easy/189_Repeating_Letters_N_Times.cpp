/*
Source: Edabit
Link : https://edabit.com/challenge/oy4fCoxGtojMNPr5R
Date: 07/04/2021

Repeating Letters N Times
===========================

Create a function that repeats each character in a string n times.

Examples
repeat("mice", 5) ? "mmmmmiiiiiccccceeeee"

repeat("hello", 3) ? "hhheeellllllooo"

repeat("stop", 1) ? "stop"
Notes
N/A

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string repeat(string s, int n) {
	string a="";
	for(char x:s)
		a+=string(n,x);
	return a;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
