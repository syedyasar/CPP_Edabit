/*
Source: Edabit
Link : https://edabit.com/challenge/kN9i6Q5ny3AmYonWi
Date: 07/04/2021

Multi-division
================

Create a function, that will for a given a, b, c, do the following:

Add a to itself b times.
Check if the result is divisible by c.
Examples
abcmath(42, 5, 10) ? false
// 42+42 = 84,84+84 = 168,168+168 = 336,336+336 = 672, 672+672 = 1344
// 1344 is not divisible by 10

abcmath(5, 2, 1) ? true

abcmath(1, 2, 3) ? false
Notes
In the first step of the function, a doesn't always refer to the original a.
"if the result is divisible by c", means that if you divide the result and c, you will get an integer (5, and not 4.5314).
The second test is correct.

*/

#include<iostream>
#include<vector>
using namespace std;
bool abcmath(int a, int b, int c) {
	for(int i=1;i<=b;i++){a=2*a;}
	return (a%c==0);
}

/*
Solution 2:
bool abcmath(int a, int b, int c) {
  return (a*(1<<b))%c==0;
}

*/

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
