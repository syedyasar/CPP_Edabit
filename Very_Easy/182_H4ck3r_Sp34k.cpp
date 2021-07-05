/*
Source: Edabit
Link : https://edabit.com/challenge/7CaLzrWHhfzGw4CaT
Date: 07/04/2021

H4ck3r Sp34k
===============

Create a function that takes a string as an argument and returns a coded (h4ck3r 5p34k) version of the string.

Examples
hackerSpeak("javascript is cool") ? "j4v45cr1pt 15 c00l"

hackerSpeak("programming is fun") ? "pr0gr4mm1ng 15 fun"

hackerSpeak("become a coder") ? "b3c0m3 4 c0d3r"
Notes
In order to work properly, the function should replace all "a"s with 4, "e"s with 3, "i"s with 1, "o"s with 0, and "s"s with 5.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string hackerSpeak(string s) {
	for(char &x:s){
		if(x=='a') x='4';
		else if(x=='e') x='3';
		else if(x=='i') x='1';
		else if(x=='o') x='0';
		else if(x=='s') x='5';
	}
	return s;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
