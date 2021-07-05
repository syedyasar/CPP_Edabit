/*
Source: Edabit
Link : https://edabit.com/challenge/hbBn9QZjrsAooPvTe
Date: 07/04/2021

Re-Form the Word
=================

A word has been split into a left part and a right part. Re-form the word by adding both halves together, changing the first character to an uppercase letter.

Examples
getWord("seas", "onal") ? "Seasonal"

getWord("comp", "lete") ? "Complete"

getWord("lang", "uage") ? "Language"
Notes
N/A
*/

#include<iostream>
#include<vector>
using namespace std;
string getWord(string l, string r) {
	string ans="";
	ans+=toupper(l[0]);
	ans+=l.substr(1)+r;
	return ans;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
