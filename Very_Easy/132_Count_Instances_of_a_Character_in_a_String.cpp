/*
Source: Edabit
Link : https://edabit.com/challenge/ubEA5TkBQFLQBcXR5
Date: 07/02/2021

Count Instances of a Character in a String
===========================================

Create a function that takes a character and a string as arguments and returns the number of times the character is found in the string.

Examples
charCount('a', "edabit") ? 1

charCount('c', "Chamber of secrets") ? 1

charCount('b', "big fat bubble") ? 4
Notes
Your output must be case-sensitive (see second example).
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int charCount(char c, string s) {
	int count=0;
	for(char i:s)
		if(i==c) count++;
	return count;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

charCount('a', "edabit") ? 1

charCount('c', "Chamber of secrets") ? 1

charCount('b', "big fat bubble") ? 4

*/
