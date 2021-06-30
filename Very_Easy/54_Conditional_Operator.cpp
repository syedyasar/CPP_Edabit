/*
Source: Edabit
Link : https://edabit.com/challenge/Qs9aWacyy5jXdNz45
Date: 06/25/2021


Using the :? Operator
========================

There is a ?: operator in C++ and it's basic form is (condition) ? (something1) : (something2).

To illustrate:

if (condition)
  something1;
else
  something2;
Write a function that uses the ?: operator to return "yeah" if b is true, and "nope" otherwise.

Examples
yeahNope(true) ? "yeah"

yeahNope(false) ? "nope"
Notes
N/A

*/


#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>

using namespace std;
string yeahNope(bool b) {
	return b? "yeah" : "nope" ;
}

int main(){
  cout << yeahNope(true) << endl;
  cout << yeahNope(false)  << endl;
  return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

yeahNope(true) ? "yeah"

yeahNope(false) ? "nope"
Notes
*/
