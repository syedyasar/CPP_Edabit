/*
Source: Edabit
Link : https://edabit.com/challenge/8zC4FSyEGAaBfc6Ec
Date: 06/30/2021

City School Creating IDS
==========================

Many IDS (for emails or Google ID) are created using the person's name.

Create a function that will return a four-character ID using the person's first name and last name. The first character will be the first letter of the first name but in lowercase. The next three characters will be the first three characters of the last name, but the first letter will be capitalized and the other two will be in lower case.

Examples
createID("mary", "lamb") ? "mLam"

createID("John", "SMITH") ? "jSmi"

createID("mary", "smith") ? "mSmi"
Notes
There is always one character in the first name and at least three in the last name.


*/


#include<vector>
#include<cmath>


#include<iostream>
#include<string>
#include <cctype>
using namespace std;
string createID(string f, string l) {
  string t="";
	t+=tolower(f[0]);
	t+=toupper(l[0]);
	t+=tolower(l[1]);
	t+=tolower(l[2]);
	return t ;
}

int main(){
    cout << createID("mary", "lamb")    << endl;
	cout << createID("John", "SMITH")   << endl;	
	cout << createID("mary", "smith")   << endl;		
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

createID("mary", "lamb") ? "mLam"

createID("John", "SMITH") ? "jSmi"

createID("mary", "smith") ? "mSmi"

Notes

*/
