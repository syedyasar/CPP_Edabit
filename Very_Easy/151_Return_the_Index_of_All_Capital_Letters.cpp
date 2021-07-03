/*
Source: Edabit
Link : https://edabit.com/challenge/NAyBq3PvcMGaLmoNA
Date: 07/02/2021

Return the Index of All Capital Letters
=========================================

Create a function that takes a single string as argument and returns an ordered array containing the indices of all capital letters in the string.

Examples
indexOfCaps("eDaBiT") ? [1, 3, 5]

indexOfCaps("eQuINoX") ? [1, 3, 4, 6]

indexOfCaps("determine") ? []

indexOfCaps("STRIKE") ? [0, 1, 2, 3, 4, 5]

indexOfCaps("sUn") ? [1]
Notes
Return an empty array if no uppercase letters are found in the string.
Assume all words do not have duplicate letters.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> indexOfCaps(string s) {
	vector<int> a;
	for(int i=0;i<s.size();i++)
		if(isupper(s[i])) a.push_back(i);
	return a;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
