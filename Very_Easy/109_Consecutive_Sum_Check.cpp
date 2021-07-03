/*
Source: Edabit
Link : https://edabit.com/challenge/QR6ABDJ3A8TrFoDA7
Date: 07/01/2021

Consecutive Sum Check
========================

Create a function that takes a number n as an argument and checks whether the given number can be expressed as a sum of two or more consecutive positive numbers.

Examples
consecutiveSum(9) ? true
// 9 can be expressed as a sum of (2 + 3 + 4) or (4 + 5).

consecutiveSum(10) ? true
// 10 can be expressed as a sum of 1 + 2 + 3 + 4.

consecutiveSum(64) ? false
Notes
N/A
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool consecutiveSum(int n) {
	return (n&(n-1)&&n);
}

int main() {
    cout << consecutiveSum(9)  << endl;
    cout << consecutiveSum(10) << endl;
    cout << consecutiveSum(64) << endl;
    return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

consecutiveSum(9) ? true
// 9 can be expressed as a sum of (2 + 3 + 4) or (4 + 5).

consecutiveSum(10) ? true
// 10 can be expressed as a sum of 1 + 2 + 3 + 4.

consecutiveSum(64) ? false

*/
