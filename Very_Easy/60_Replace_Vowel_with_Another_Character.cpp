/*
Source: Edabit
Link : https://edabit.com/challenge/eBgHrHSDsg6gvSbZz
Date: 06/25/2021


Replace Vowel with Another Character
======================================

Create a function that takes a string and replaces the vowels with another character.

a = 1
e = 2
i = 3
o = 4
u = 5
Examples
replaceVowel("karachi") ? "k1r1ch3"

replaceVowel("chembur") ? "ch2mb5r"

replaceVowel("khandbari") ? "kh1ndb1r3"
Notes
The input will always be in lowercase.
*/


#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>
using namespace std;
string replaceVowel(string w) {
	for(int i=0;w[i]!='\0';i++){
		if(w[i]=='a') w[i]='1';
		else if(w[i]=='e') w[i]='2';
		else if(w[i]=='i') w[i]='3';
		else if(w[i]=='o' ) w[i]='4';
		else if(w[i]=='u') w[i]='5';
	}
	return w;
}

int main(){
	cout <<  replaceVowel("karachi")  << endl ;
	cout <<  replaceVowel("chembur") << endl ;
	cout <<  replaceVowel("khandbari") << endl ;
	return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

replaceVowel("karachi") ? "k1r1ch3"

replaceVowel("chembur") ? "ch2mb5r"

replaceVowel("khandbari") ? "kh1ndb1r3"

Notes
*/
