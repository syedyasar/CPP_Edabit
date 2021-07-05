/*
Source: Edabit
Link : https://edabit.com/challenge/vamnJkk9YcDtR76Bh
Date: 07/05/2021

String Pairs
==============

Create a function that takes a string str and returns an array of two-paired characters. If the string has an odd number of characters, add an asterisk * in the final pair.

See the below examples for a better understanding:

Examples
stringPairs("mubashir") ? ["mu", "ba", "sh", "ir"]

stringPairs("edabit") ? ["ed", "ab", "it"]

stringPairs("airforces") ? ["ai", "rf", "or", "ce", "s*"]
Notes
Return [] if the given string is empty.

*/

#include <iostream>

using namespace std;
vector<string> stringPairs(string s) {
	vector<string> a;
	if(s.size()%2) s+='*';
	for(int i=0; i<s.size() ; i=i+2)  a.push_back(s.substr(i,2));																
	return a;									 
}
/*
Solution 2:

using namespace std;
vector<string> stringPairs(string s) {
	vector<string> a;
	if(s.size()%2) s+='*';
	for(int i=0; i<s.size() ; i=i+2)  a.push_back(s.substr(i,2));																
	return a;									 
}

*/

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
