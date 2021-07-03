/*
Source: Edabit
Link : https://edabit.com/challenge/8hgWktL9vSRCB2d7h
Date: 07/02/2021

Spelling it Out
==================

Create a function which takes in a word and spells it out, by consecutively adding letters until the full word is completed.

Examples
spelling("bee") ? ["b", "be", "bee"]

spelling("happy") ? ["h", "ha", "hap", "happ", "happy"]

spelling("eagerly") ? ["e", "ea", "eag", "eage", "eager", "eagerl", "eagerly"]
Notes
N/A

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<string> spelling(string s) {
	vector<string> a;
	for(int i=1;i<=s.size();i++)
		a.push_back(s.substr(0,i));
 return a;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
