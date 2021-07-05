/*
Source: Edabit
Link : https://edabit.com/challenge/ch9H2q9KH2vbu4NQ2
Date: 07/02/2021

Index Shuffle
===============

Write a function that takes all even-indexed characters and odd-indexed characters from a string and concatenates them together.

To illustrate:

indexShuffle("abcd") ? "acbd" 
// "ac" (even-indexed) + "bd" (odd-indexed)
Examples
indexShuffle("abcdefg") ? "acegbdf"

indexShuffle("holiday") ? "hldyoia"

indexShuffle("maybe") ? "myeab"
Notes
0 should be treated as an even number.

*/

#include<iostream>
#include<vector>
using namespace std;
string indexShuffle(string s) {
	string a="";
	for(int i=0;i<s.size();i+=2){	a+=s[i];}
	for(int i=1;i<s.size();i+=2){	a+=s[i];}
	return a.substr(0,s.size());
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
