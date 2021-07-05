/*
Source: Edabit
Link : https://edabit.com/challenge/5PbmgDH8AiYcqH5dn
Date: 07/05/2021

Matchstick Houses
===================

This challenge will help you interpret mathematical relationships both algebraically and geometrically.

Matchstick Houses, Steps 1, 2 and 3

Create a function that takes a number (step) as an argument and returns the number of matchsticks in that step. See step 1, 2 and 3 in the image above.

Examples
matchHouses(1) ? 6

matchHouses(4) ? 21

matchHouses(87) ? 436
Notes
Step 0 returns 0 matchsticks.
The input (step) will always be a non-negative integer.
Think of the input (step) as the total number of houses that have been connected together.
*/
#include <iostream>
int matchHouses(int n) {
	if(n==0) return 0;
	else { return 5*n +1;}
}
/*
Solution 2:


*/

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
