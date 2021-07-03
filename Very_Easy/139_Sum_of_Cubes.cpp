/*
Source: Edabit
Link : https://edabit.com/challenge/2Qb5Q7rHmQLi2xrop
Date: 07/02/2021

Sum of Cubes
=============

Create a function that takes in an array of numbers and returns the sum of its cubes.

Examples
sumOfCubes([1, 5, 9]) ? 855
// Since 1^3 + 5^3 + 9^3 = 1 + 125 + 729 = 855

sumOfCubes([3, 4, 5]) ? 216

sumOfCubes([2]) ? 8

sumOfCubes([]) ? 0
Notes
If given an empty array, return 0.
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int sumOfCubes(vector<int> a) {
	int sum=0;
	for(int x:a)
		sum+=x*x*x;
	return sum;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
