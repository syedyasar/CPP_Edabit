/*
Source: Edabit
Link :  https://edabit.com/challenge/CYHtwLvsRsQNd8S8P
Date: 07/01/2021

Testing K^K == N?
====================

Write a function that returns true if k^k == n for input (n, k) and return false otherwise.

Examples
kToK(4, 2) ? true

kToK(387420489, 9) ? true
// 9^9 == 387420489

kToK(3124, 5) ? false

kToK(17, 3) ? false
Notes
The ^ operator refers to exponentiation operation, not the bitwise XOR operation.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool kToK(unsigned long long n, unsigned long long k) {
	return n== pow(k,k);
}

int main() {
	cout << kToK(4, 2)          << endl;
	cout << kToK(387420489, 9)  << endl;
	cout << kToK(3124, 5)       << endl;	
	cout << kToK(17, 3)         << endl;	
    return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

kToK(4, 2) ? true

kToK(387420489, 9) ? true
// 9^9 == 387420489

kToK(3124, 5) ? false

kToK(17, 3) ? false
*/
