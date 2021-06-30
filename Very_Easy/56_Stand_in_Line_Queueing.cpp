/*
Source: Edabit
Link : https://edabit.com/challenge/jTiodTsK8Y59encrn
Date: 06/25/2021


Stand in Line [Queueing]
===========================

Write a function that takes a vector and a integer as arguments. Add the number to the end of the vector, then remove the first element of the vector. The function should then return the updated vector.

Examples
nextInLine({5, 6, 7, 8, 9}, 1) ? {6, 7, 8, 9, 1}

nextInLine({7, 6, 3, 23, 17}, 10) ? {6, 3, 23, 17, 10}

nextInLine({1, 10, 20, 42 }, 6) ? {10, 20, 42, 6}

nextInLine({}, 6) ? {}
Notes
For an empty vector input, return and empty vector.
Also this challenge is an introduction into the consept of queueing.
*/


#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>

using namespace std;
vector<int> nextInLine(vector<int> que, int n) {
	que.erase(que.begin());
	que.push_back(n);
	return que;
}



/*

Online Compiler : https://replit.com/languages/cpp?v2=1

nextInLine({5, 6, 7, 8, 9}, 1) ? {6, 7, 8, 9, 1}

nextInLine({7, 6, 3, 23, 17}, 10) ? {6, 3, 23, 17, 10}

nextInLine({1, 10, 20, 42 }, 6) ? {10, 20, 42, 6}
Notes
*/
