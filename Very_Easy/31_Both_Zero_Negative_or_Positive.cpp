/*
Source: Edabit
Link : https://edabit.com/challenge/8BnYMTRgHwBk75HPG
Date: 06/19/2021

Both Zero, Negative or Positive
==================================

Write a function that returns true if both numbers are:

Smaller than 0, OR ...
Greater than 0, OR ...
Exactly 0
Otherwise, return false.

Examples
both(6, 2) ? true

both(0, 0) ? true

both(-1, 2) ? false

both(0, 2) ? false
Notes
Inputs will always be two numbers.
*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
using namespace std;
bool isSame(int a, int b) {
	return (a>0 && b>0) || (a<0 && b<0) ||(a==0 && b==0)  ;
}

int main(){
	
	cout << isSame(6, 2)  << endl;
	cout << isSame(0, 0)   << endl;
	cout << isSame(-1, 2) << endl;
	cout << isSame(0, 2) << endl;	
}

/*
both(6, 2) ? true

both(0, 0) ? true

both(-1, 2) ? false

both(0, 2) ? false

*/
