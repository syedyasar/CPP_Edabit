/*
Source: Edabit
Link : https://edabit.com/challenge/XqRSzmXMuZNrqsLt9
Date: 06/25/2021


Compare Strings by Count of Characters
=========================================

Create a function that takes two strings as arguments and return either true or false depending on whether the total number of characters in the first string is equal to the total number of characters in the second string.

Examples
comp("AB", "CD") ? true

comp("ABC", "DE") ? false

comp("hello", "edabit") ? false
Notes
Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

*/


#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>

using namespace std;
bool comp(string str1,string str2) {
	return (str1.size()==str2.size());
}

int main(){
  cout << comp("AB", "CD")  << endl;
  cout << comp("ABC", "DE") << endl;
  cout << comp("hello", "edabit")    << endl;
  return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

comp("AB", "CD") ? true

comp("ABC", "DE") ? false

comp("hello", "edabit") ? false
Notes
*/
