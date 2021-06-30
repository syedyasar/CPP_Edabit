/*
Source: Edabit
Link : https://edabit.com/challenge/8EAJK2XcdP8K84CQz
Date: 06/29/2021


Binary to Decimal Converter
===============================

You are given one input: An array containing eight 1's and/or 0's. Write a function that takes an 8 bit binary number and convert it to decimal.

Examples
binaryToDecimal([1, 1, 1, 1, 1, 1, 1, 1]) ? 255

binaryToDecimal([0, 0, 0, 0, 0, 0, 0, 0]) ? 0

binaryToDecimal([1, 0, 1, 1, 1, 1, 0, 0]) ? 188
Notes
Return an integer.

*/
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int binaryToDecimal(vector<int> b) {
	int sum=0;
	for(int j=0; j<=7;j++){
				if(b[j]!=0) sum+=pow(2,7-j);
	}
  return sum;
}

int main(){
	cout << binaryToDecimal({1, 1, 1, 1, 1, 1, 1, 1})    << endl ;
	cout << binaryToDecimal({0, 0, 0, 0, 0, 0, 0, 0}) << endl ;
	cout << binaryToDecimal({1, 0, 1, 1, 1, 1, 0, 0})  << endl ;
	return 0;
}



/*

Online Compiler : https://replit.com/languages/cpp?v2=1

binaryToDecimal([1, 1, 1, 1, 1, 1, 1, 1]) ? 255

binaryToDecimal([0, 0, 0, 0, 0, 0, 0, 0]) ? 0

binaryToDecimal([1, 0, 1, 1, 1, 1, 0, 0]) ? 188

Notes

*/
