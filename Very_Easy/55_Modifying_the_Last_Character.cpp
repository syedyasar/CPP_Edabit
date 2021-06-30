/*
Source: Edabit
Link : https://edabit.com/challenge/5dmMyhAaEDcAAAtaC
Date: 06/25/2021


Modifying the Last Character
=============================

Create a function which makes the last character of a string repeat n number of times.

Examples
modifyLast("Hello", 3) ? "Hellooo"

modifyLast("hey", 6) ? "heyyyyyy"

modifyLast("excuse me what?", 5) ? "excuse me what?????"
Notes
Tests will include numbers and punctuation.
Make sure your code is not case sensitive.

*/


#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>

using namespace std;
string modifyLast(string s, int n) {
	char c=s[s.size()-1];
	for(int i=1;i<n;i++)	s+=c;
	return s;
}

int main(){
  cout << modifyLast("Hello", 3) << endl;
  cout << modifyLast("hey", 6)   << endl;
  cout << modifyLast("excuse me what?", 5)   << endl;
  return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

modifyLast("Hello", 3) ? "Hellooo"

modifyLast("hey", 6) ? "heyyyyyy"

modifyLast("excuse me what?", 5) ? "excuse me what?????"
Notes
*/
