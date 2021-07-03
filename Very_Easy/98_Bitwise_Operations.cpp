/*
Source: Edabit
Link : https://edabit.com/challenge/qA5aT6XYfafH3NwcX
Date: 06/30/2021

Bitwise Operations
====================

A decimal number can be represented as a sequence of bits. To illustrate:

6 = 00000110
23 = 00010111
From the bitwise representation of numbers, we can calculate the bitwise AND, bitwise OR and bitwise XOR. Using the example above:

bitwiseAND(6, 23) ? 00000110

bitwiseOR(6, 23) ? 00010111

bitwiseXOR(6, 23) ? 00010001
Write three functions to calculate the bitwise AND, bitwise OR and bitwise XOR of two numbers.

Examples
bitwiseAND(7, 12) ? 4

bitwiseOR(7, 12) ? 15

bitwiseXOR(7, 12) ? 11
Notes
N/A

*/

#include<iostream>
#include<vector>

using namespace std;
int bitwiseAND(int n1, int n2) {
	return n1 & n2;
}

int bitwiseOR(int n1, int n2) {
		return n1 | n2;
}

int bitwiseXOR(int n1, int n2) {
		return n1 ^ n2;
}
int main(){
	cout << bitwiseAND(6, 23)     << endl;
	cout << bitwiseOR(6, 23)      << endl;	
	cout << bitwiseXOR(6, 23)     << endl;	
	return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

bitwiseAND(6, 23) ? 00000110

bitwiseOR(6, 23) ? 00010111

bitwiseXOR(6, 23) ? 00010001

*/
