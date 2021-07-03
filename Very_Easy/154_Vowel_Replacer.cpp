/*
Source: Edabit
Link : https://edabit.com/challenge/kzgKQ7n878Zd6v4vo
Date: 07/02/2021

Vowel Replacer
=================

Create a function that replaces all the vowels in a string with a specified character.

Examples
replaceVowels("the aardvark", '#') ? "th# ##rdv#rk"

replaceVowels("minnie mouse", '?') ? "m?nn?? m??s?"

replaceVowels("shakespeare", '*') ? "sh*k*sp**r*"
Notes
All characters will be in lower case.
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string replaceVowels(string s, char c) {
	for(char &x:s){
		if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' )
			x=c;
	}
	return s;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
