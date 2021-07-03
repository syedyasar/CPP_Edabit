/*
Source: Edabit
Link : https://edabit.com/challenge/EcKasnKQ8nWWPPnNY
Date: 07/02/2021

Concatenating Two Integer Vectors
===================================

Create a function to concatenate two integer vectors.

Examples
concat([1, 3, 5], [2, 6, 8]) ? [1, 3, 5, 2, 6, 8]

concat([7, 8], [10, 9, 1, 1, 2]) ? [7, 8, 10, 9, 1, 1, 2]

concat([4, 5, 1], [3, 3, 3, 3, 3]) ? [4, 5, 1, 3, 3, 3, 3, 3]
Notes
Don't forget to return the result.
See Resources tab for more info.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int> concat(vector<int> a1, vector<int> a2) {
	vector<int> b;
	for(int x1:a1) b.push_back(x1);
	for(int x2:a2) b.push_back(x2);
	return b;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
