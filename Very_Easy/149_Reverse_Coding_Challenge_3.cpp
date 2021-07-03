/*
Source: Edabit
Link : https://edabit.com/challenge/ZK7TGkgmBxHKw8vsy
Date: 07/02/2021

Reverse Coding Challenge #3
=============================

This is a reverse coding challenge. Normally you're given explicit directions with how to create a function. Here, you must generate your own function to satisfy the relationship between the inputs and outputs.

Your task is to create a function that, when fed the inputs below, produce the sample outputs shown.

Examples
[5, 7, 8, 2, 1], 2 ? [1, 1, 0, 0, 1]

[9, 8, 16, 47], 4 ? [1, 0, 0, 3]

[17, 11, 99, 55, 23, 1], 5 ? [2, 1, 4, 0, 3, 1]

[6, 1], 7 ? [6, 1]

[3, 2, 9], 3 ? [0, 2, 0]

[48, 22, 0, 19, 33, 100], 10 ? [8, 2, 0, 9, 3, 0]
Notes
If you get stuck, see Comments for a hint.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> mysteryFunc(vector<int> a, int n) {
	vector<int> b;
	for(int x:a)
		b.push_back(x%n);
	return b;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
