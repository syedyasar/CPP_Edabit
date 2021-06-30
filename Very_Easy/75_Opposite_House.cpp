/*
Source: Edabit
Link : https://edabit.com/challenge/ekEJwoMZQoQgDjZrW
Date: 06/29/2021


Opposite House ???
====================

Mubashir was walking through a straight street with exactly n identical houses on both sides. House numbers in the street look like this:

1 |   | 6

3 |   | 4

5 |   | 2
He noticed that Even numbered houses increases on the right while Odd numbered houses decreases on the left.

Create a function that takes a house number house and length of the street n and returns the house number on the opposite side.

Examples
oppositeHouse(1, 3) ? 6

oppositeHouse(2, 3) ? 5

oppositeHouse(3, 5) ? 8
Notes
N/A

*/

#include <iostream>
#include<vector>
using namespace std;
long oppositeHouse(long house, long n) {
	return 2*n + 1 - house;
}

int main(){
	cout << oppositeHouse(1, 3)     << endl ;
	cout << oppositeHouse(2, 3)     << endl ;
	cout << oppositeHouse(3, 5)     << endl ;
	return 0;
}



/*

Online Compiler : https://replit.com/languages/cpp?v2=1

oppositeHouse(1, 3) ? 6

oppositeHouse(2, 3) ? 5

oppositeHouse(3, 5) ? 8

Notes

*/
