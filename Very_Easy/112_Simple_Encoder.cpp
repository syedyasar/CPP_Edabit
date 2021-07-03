/*
Source: Edabit
Link :  https://edabit.com/challenge/tPE5FvBoum9N6r2hS
Date: 07/01/2021

Simple Encoder
================

Create a function that takes a string str and performs simple encoding as per the following method:

Replace all single occurrence characters with [
Replace all characters with two or more occurrences with ]
Return the final string after modification.

Examples
simpleEncoder("Mubashir") ? "[[[[[[[["
// '[' for each character

simpleEncoder("Matt") ? "[[]]"
// ']' for both 't'

simpleEncoder("eD  aBiT") ? "[[]][[[["
// Two spaces in between
Notes
Strings can contain lower and uppercase letters. Treat them equally (i.e. A = a, B = b).
Spaces are also characters.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string simpleEncoder(string s) {
	int c, l=s.size();
	for(int i=0;i<l;i++){
				if(isupper(s[i])) s[i]=s[i]+32;;
	}

	for(int i=0;i<l-1;i++){
		c=0;
		for(int j=i+1; j<l ; j++){
				if(s[i]==s[j]) {	s[j]=']'; c=1;	}
		}
		if(c) s[i]=']';
	}
	
	for(int i=0;i<l;i++){		if(s[i]!=']') s[i]='[';		}
	return s;
}

int main() {
	cout << simpleEncoder("Mubashir") << endl;
	cout << simpleEncoder("Matt")  << endl;
	cout << simpleEncoder("eD  aBiT")  << endl;	
    return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

simpleEncoder("Mubashir") ? "[[[[[[[["
// '[' for each character

simpleEncoder("Matt") ? "[[]]"
// ']' for both 't'

simpleEncoder("eD  aBiT") ? "[[]][[[["
// Two spaces in between
Notes

*/
