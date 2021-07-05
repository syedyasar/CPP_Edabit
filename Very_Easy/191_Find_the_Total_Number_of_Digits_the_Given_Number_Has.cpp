/*
Source: Edabit
Link : https://edabit.com/challenge/MaFhncC8uX8Cerx6T
Date: 07/04/2021

Find the Total Number of Digits the Given Number Has
=====================================================

Create a function that takes a number as an argument and returns the amount of digits it has.

Examples
findDigitAmount(123) ? 3

findDigitAmount(56) ? 2

findDigitAmount(7154) ? 4

findDigitAmount(61217311514) ? 11

findDigitAmount(0) ? 1
Notes
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

*/

#include<iostream>
#include<vector>
#include<cmath>
int findDigitAmount(int n) {
 int c=0;
	if(n==0) return 1;
	while(n){
		n=n/10;
		c++;
	}
	return c;
}

/*
Solution 2:
return std::to_string(num).length();

*/

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
