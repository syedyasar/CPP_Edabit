/*
Source: Edabit
Link : https://edabit.com/challenge/BGALaCDo5s8kuwuqG
Date: 07/01/2021

Add a Consecutive List of Numbers
==================================

Write a function that takes the last number of a consecutive list of numbers and returns the total of all numbers up to and including it.

Examples
addUpTo(3) ? 6
// 1 + 2 + 3 = 6

addUpTo(10) ? 55
// 1 + 2 + 3 + ... + 10 = 55

addUpTo(7) ? 28
// 1 + 2 + 3 + ... + 7 = 28
Notes
You will only be given valid inputs.
There are various ways of doing this; try finding them!
Remember to return the result.
*/

#include<iostream>
#include<vector>


using namespace std;
int addUpTo(int n) {
	return n*(n+1)/2;
}

int main(){
	cout << addUpTo(3)   << endl;
	cout << addUpTo(10)  << endl;	
	cout << addUpTo(7)   << endl;		
	return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

addUpTo(3) ? 6

addUpTo(10) ? 55

addUpTo(7) ? 28
*/
