/*
Source: Edabit
Link : https://edabit.com/challenge/7HaSSsMQcNanohAQW
Date: 06/30/2021

Trailing Zeros
================

Mubashir needs your help to find out trailing zeros after calculating factorial of a given number.

Create a function which takes a number n and calculates the number of trailing zeros in factorial of the given number.

n! = 1 * 2 * 3 * ... * n
Examples
trailingZeros(0) ? 0
// 0! = 1
// No trailing zero.

trailingZeros(6) ? 1
// 6! = 120
// 1 trailing zero.

trailingZeros(1000) ? 249
// 1000! has 249 trailing zeros.
Notes
Hint: No need to calculate the factorial (because it won't help). Find another way to find the number of zeros.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


long trailingZeros(long n) {
	int z=0,t;
  while(n>=5){ t=n/5; n/=5; z+=t; }
	return  z;
}

int main(){
	cout <<  trailingZeros(0)     << endl;
	cout <<  trailingZeros(6)     << endl;	
	cout <<  trailingZeros(1000)  << endl;		
	return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

trailingZeros(0) ? 0

trailingZeros(6) ? 1

trailingZeros(1000) ? 249

Notes

*/
