/*
Source: Edabit
Link : https://edabit.com/challenge/Rn8SBfAoBoREXSfZe
Date: 07/02/2021

Check Factors
===============

Write a function that returns true if all integers in an array are factors of a number, and false otherwise.

Examples
checkFactors([2, 3, 4], 12) ? true
// Since 2, 3, and 4 are all factors of 12.

checkFactors([1, 2, 3, 8], 12) ? false
// 8 is not a factor of 12.

checkFactors([1, 2, 50], 100) ? true

checkFactors([3, 6], 9) ? false
Notes
N/A
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool checkFactors(vector<int> f, int n) {
	for(int x:f)
		if(n%x!=0) return 0;
	return 1;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
