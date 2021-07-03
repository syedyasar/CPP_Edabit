/*
Source: Edabit
Link : https://edabit.com/challenge/Gz2frA7fg2KBTguWB
Date: 07/02/2021

Squares and Cubes
====================

Create a function that takes an array of two numbers and checks if the square root of the first number is equal to the cube root of the second number.

Examples
checkSquareAndCube([4, 8]) ? true

checkSquareAndCube([16, 48]) ? false

checkSquareAndCube([9, 27]) ? true
Notes
Remember to return either true or false.
All arrays contain two positive numbers.
If you're stuck, check the Resources for a hint.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool checkSquareAndCube(vector<int> a) {
	return (a[0]*a[0]*a[0]==a[1]*a[1]) ;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
