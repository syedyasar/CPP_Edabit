/*
Source: Edabit
Link : https://edabit.com/challenge/MDpsgmNryojgyYR87
Date: 07/02/2021

Integer in Range?
==================
Create a function that validates whether a number n is within the bounds of lower and upper.

Examples
intWithinBounds(3, 1, 9) ? true

intWithinBounds(6, 1, 6) ? false

intWithinBounds(9, 9, 9) ? false
Notes
The term "within bounds" means a number is considered equal or greater than a lower bound and lesser (but not equal) to an upper bound, (see example #2).
Bounds will be always given as integers.

*/

#include<iostream>
#include<vector>
#include<cmath>
bool intWithinBounds(int n, int lower, int upper) {
	return (n>=lower && n<upper);
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
