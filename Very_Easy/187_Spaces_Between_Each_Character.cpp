/*
Source: Edabit
Link : https://edabit.com/challenge/MdG2xWqHz4qj8TzTG
Date: 07/04/2021

Spaces Between Each Character
================================

Create a function that takes a string and returns a string with spaces in between all of the characters.

Examples
spaceMeOut("space") ? "s p a c e"

spaceMeOut("far out") ? "f a r  o u t"

spaceMeOut("elongated musk") ? "e l o n g a t e d   m u s k"
Notes
Treat a space as its own character (i.e. leave three spaces between words).

*/

#include<iostream>
#include<vector>
using namespace std;
string spaceMeOut(string s) {
	string ans="";
	for(int i=0;i<s.size(); i++){
		ans+= s[i];
		if(i!=s.size() -1 ) ans+= " ";  
	}
	return ans;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
