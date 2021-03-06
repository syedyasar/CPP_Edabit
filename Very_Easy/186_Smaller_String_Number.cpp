/*
Source: Edabit
Link : https://edabit.com/challenge/XyJL2CKixRBQ6xphz
Date: 07/04/2021

Smaller String Number
=======================

Create a function that returns the smaller number.

Examples
smallerNum("21", "44") ? "21"

smallerNum("1500", "1") ? "1"

smallerNum("5", "5") ? "5"
Notes
Numbers will be represented as strings, and your output should also be a string.
If both numbers tie, return either number.
Numbers will be positive.
Bonus: See if you can do this without converting to integers.

*/

#include<iostream>
#include<vector>
using namespace std;
string smallerNum(string n1, string n2) {
	int t1,t2;
	t1=stoi(n1);t2=stoi(n2);
	if(t1<t2) return n1;
	else return n2 ;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
