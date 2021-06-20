/*
Source: Edabit
Link : https://edabit.com/challenge/6a5QwRP8mHuD7jdGr
Date: 06/19/2021

Sum of Cubes
===============


Create a function that takes a positive integer n, and returns the sum of all the cubed values from 1 to n.

For example, if n is 3:

sumCubes(3) ? 36
1 ** 3 + 2 ** 3 + 3 ** 3 = 36
Examples
sumCubes(7) ? 784

sumCubes(8) ? 1296

sumCubes(9) ? 2025
Notes
Input n will be a positive integer.
s
*/

#include <iostream>
using namespace std;

unsigned long sumCubes(int n) {
	int c=0;
	for(int i=0;i<=n;i++)
		c+=i*i*i;
	return c;
}

int main() {
cout << 	sumCubes(7) << endl; // 784
cout << 	sumCubes(8) << endl; // 1296
cout << 	sumCubes(9) << endl; // false
return 0; 
}


/*
sumCubes(7) ? 784

sumCubes(8) ? 1296

sumCubes(9) ? 2025
*/
