/*
Source: Edabit
Link : https://edabit.com/challenge/LLghsZNEvYKMXvjzf
Date: 06/29/2021


Recursion: Length of a String
===============================

Write a function that returns the length of a string. Make your function recursive.

Examples
length("apple") ? 5

length("make") ? 4

length("a") ? 1

length("") ? 0
Notes
Check the Resources tab for info on recursion.

*/

#include <iostream>
#include<vector>
using namespace std;
int length(string str) {
	if(str[0]=='\0') return 0;
	else return length(str.substr(1))+1;
}


int main(){
	cout << length("apple")  << endl ;
	cout << length("make")   << endl ;
	cout << length("a")      << endl ;
	cout << length("")    << endl ;
	return 0;
}



/*

Online Compiler : https://replit.com/languages/cpp?v2=1

length("apple") ? 5

length("make") ? 4

length("a") ? 1

length("") ? 0

Notes

*/
