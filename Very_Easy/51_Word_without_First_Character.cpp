/*
Source: Edabit
Link : https://edabit.com/challenge/TSnCTC6QiW4m5wCjj
Date: 06/21/2021


Word without First Character
==============================

Create a function that takes a word and returns the new word without including the first character.

Examples
newWord("apple") ? "pple"

newWord("cherry") ? "herry"

newWord("plum") ? "lum"
Notes
The input is always a valid word.

*/


#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>
#include<cmath>
using namespace std;

string newWord(string s) {
	return s.substr(1);
//	return s.substr(1,s.size())-1);
}
int main(){
  cout << newWord("apple")  << endl;
  cout << newWord("cherry") << endl;
  cout << newWord("plum")   << endl;
  return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

newWord("apple") ? "pple"

newWord("cherry") ? "herry"

newWord("plum") ? "lum"

Notes
*/
