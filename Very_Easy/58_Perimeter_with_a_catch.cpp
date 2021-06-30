/*
Source: Edabit
Link : https://edabit.com/challenge/McqmxqdaKiBDFnnPj
Date: 06/25/2021


Perimeters with a Catch
=========================


Write a function that takes a number and returns the perimeter of either a circle or a square. The input will be in the form (letter l, number num) where the letter will be either "s" for square, or "c" for circle, and the number will be the side of the square or the radius of the circle.

Use the following formulas:

Perimeter of a square: 4 * side.
Perimeter of a circle: 6.28 * radius.
The catch is you can only use arithmetic or comparison operators, which means:

No if... else statements.
No objects.
No arrays.
No formatting methods, etc.
The goal is to write a short, branch-free piece of code.

Examples
perimeter("s", 7) ? 28

perimeter("c", 4) ? 25.12

perimeter("c", 9) ? 56.52
Notes
No rounding is needed.
*/


#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>

using namespace std;
double perimeter(char l, int n) {
	return  (l=='s') ?  4*n :  6.28 * n ;	
}

int main(){
	cout <<  perimeter('s', 7)   << endl ;
	cout <<  perimeter('c', 4) << endl ;
	cout <<  perimeter('c', 9)  << endl ;
	return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

perimeter("s", 7) ? 28

perimeter("c", 4) ? 25.12

perimeter("c", 9) ? 56.52
Notes
*/
