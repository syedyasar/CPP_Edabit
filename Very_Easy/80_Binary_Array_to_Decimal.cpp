/*
Source: Edabit
Link : https://edabit.com/challenge/2uJaisEZg8TQ7tGD6
Date: 06/29/2021

Binary Array to Decimal
=========================

In mathematics and digital electronics, a binary number is a number expressed in the base-2 numeral system or binary numeral system. Given an array of ones and zeroes of a binary number, return the equivalent decimal value.

Examples
binaryToDecimal([0, 0, 0, 1]) ? 1

binaryToDecimal([0, 0, 1, 0]) ? 2

binaryToDecimal([1, 1, 1, 1, 1, 0, 1, 1, 0, 1]) ? 1005
Notes
N/A
*/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int binaryToDecimal(vector<int> a) {
	int d=0;
	int t=a.size()-1;
	for(int i=t ; i>=0 ;i--){	if(a[i]) d+=pow(2,t-i);	}
	return d;
}



int main(){
	cout << binaryToDecimal({0, 0, 0, 1})  << endl;
	cout << binaryToDecimal({0, 0, 1, 0}) << endl;	
	cout << binaryToDecimal({1, 1, 1, 1, 1, 0, 1, 1, 0, 1}) << endl;		
	return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

binaryToDecimal([0, 0, 0, 1]) ? 1

binaryToDecimal([0, 0, 1, 0]) ? 2

binaryToDecimal([1, 1, 1, 1, 1, 0, 1, 1, 0, 1]) ? 1005
Notes

*/
