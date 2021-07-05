/*
Source: Edabit
Link : https://edabit.com/challenge/mewALm92Fy5PhAkJf
Date: 07/04/2021


Number Type Limits
===========================

Create a function that returns a vector that has three elements which are:

The maximum value of an int type.
The maximum value of a long long type (the biggest number).
The maximum value of a short int type.
Examples
No examples because the solution is hardcoded, and always the same.

Notes
Try not to use tests section to see the solution.
When you are on the maximum number in each type, if you add 1 to it, the result becomes negative, for example if the maximum number of int is 100 (which it isn't) if you add 1 to it, it would become -101.

*/

#include<iostream>
#include <limits.h>
using namespace std;
vector <long long> findMax() {
	// long long is used for the vector type because it is bigger than 
	// int and short int
	return vector <long long> {INT_MAX, LLONG_MAX-1,SHRT_MAX };
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
