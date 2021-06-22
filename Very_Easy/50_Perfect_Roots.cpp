/*
Source: Edabit
Link : https://edabit.com/challenge/SdMqwKDuPJums9adp
Date: 06/21/2021


Perfect Roots
===============

Given a number n, find if its 2nd, 4th and 8th roots are all integers (perfect roots), return true if it exists, false if not.

Examples
perfectRoots(256) ? true
// 2nd root of 256 is 16
// 4th root of 256 is 4
// 8th root of 256 is 2

perfectRoots(1000) ? false

perfectRoots(6561) ? true
Notes
n > 1

*/


#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>
#include<cmath>
using namespace std;

bool perfectRoots(unsigned int n) {
	float x= pow(n,0.125);
	return (x==round(x));
}

int main(){
  cout << multiSum(1) << endl;
  return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

perfectRoots(256) ? true

perfectRoots(1000) ? false

perfectRoots(6561) ? true

Notes
*/
