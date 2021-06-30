/*
Source: Edabit
Link : https://edabit.com/challenge/LLghsZNEvYKMXvjzf
Date: 06/29/2021


Orthogonal Vector
==================

Create a function that takes two vectors as arrays and checks if the two vectors are orthogonal or not. The return value is boolean. Two vectors a and b are orthogonal if their dot product is equal to zero.

Examples
isOrthogonal([1, 2], [2, -1]) ? true

isOrthogonal([3, -1], [7, 5]) ? false

isOrthogonal([1, 2, 0], [2, -1, 10]) ? true
Notes
The two arrays will be of same length.
Check out the Resources tab.

*/

#include <iostream>
#include<vector>
using namespace std;
bool isOrthogonal(vector<int> a1, vector<int> a2) {
	int sum=0;
	for(int i=0;i<a1.size();i++){
		sum+=a1[i]*a2[i];
	}
	return !sum;
}

int main(){
	cout << isOrthogonal({1, 2}, {2, -1} )<< endl ;
	cout << isOrthogonal({3, -1}, {7, 5}) << endl ;
	cout << isOrthogonal({1, 2, 0}, {2, -1, 10})  << endl ;
	return 0;
}



/*

Online Compiler : https://replit.com/languages/cpp?v2=1

isOrthogonal([1, 2], [2, -1]) ? true

isOrthogonal([3, -1], [7, 5]) ? false

isOrthogonal([1, 2, 0], [2, -1, 10]) ? true

Notes

*/
