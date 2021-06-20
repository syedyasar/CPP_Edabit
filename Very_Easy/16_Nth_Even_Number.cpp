/*
Source: Edabit
Link : https://edabit.com/challenge/J2AZTNAWGv2aDe92b
Date: 06/19/2021



Drinks Allowed?
==================

Nth Even Number
Create a function that takes a number n and returns the nth even number.

Examples
nthEven(1) ? 0
// 0 is first even number

nthEven(2) ? 2
// 2 is second even number

nthEven(100) ? 198
Notes
N/A

*/

#include <iostream>


using namespace std;

int nthEven(int n) {
	return (n-1)*2;
}

int main(){
cout << 	nthEven(1)<< endl;  //   false
cout << 	nthEven(2) << endl;  //  true
cout << 	nthEven(100) << endl;  // false
}

/*

nthEven(1) ? 0
// 0 is first even number

nthEven(2) ? 2
// 2 is second even number

nthEven(100) ? 198

*/
