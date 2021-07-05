/*
Source: Edabit
Link : https://edabit.com/challenge/LLBGEovybpJknvJ5B
Date: 07/04/2021

Alternating Ones and Zeroes
=============================

Write a function that returns true if the binary string can be rearranged to form a string of alternating 0s and 1s.

Examples
canAlternate("0001111") ? true
// Can make: "1010101"

canAlternate("01001") ? true
// Can make: "01010"

canAlternate("010001") ? false

canAlternate("1111") ? false
Notes
No substring of the output may contain more than one consecutive repeating character (e.g. 00 or 11 are not allowed).
Return false if a string only contains 0s or only contains 1s.
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool canAlternate(string s) {
	int c0=0,c1=0;
	for(char x:s){
		if(x=='1') c1++;
	  else c0++;
	}
  if( abs(c0-c1) <=1) return 1;
	else return 0;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
