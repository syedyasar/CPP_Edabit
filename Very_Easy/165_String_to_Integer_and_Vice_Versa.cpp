/*
Source: Edabit
Link : https://edabit.com/challenge/R9N4ek3h7qdyd7vj8
Date: 07/02/2021

String to Integer and Vice Versa
===================================

Write two functions:

toInt() : A function to convert a string to an integer.
toStr() : A function to convert an integer to a string.
Examples
toInt("77") ? 77

toInt("532") ? 532

toStr(77) ? "77"

toStr(532) ? "532"
Notes
Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.
*/

#include<iostream>
#include<vector>
using namespace std;
int toInt(string s) {
	return stoi(s);
}

string toStr(int i) {
	return to_string(i);
}



/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
