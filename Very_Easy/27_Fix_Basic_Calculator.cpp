/*
Source: Edabit
Link :  https://edabit.com/challenge/JoxJG2b4r9B7Ef5Hc
Date: 06/19/2021


Fix Basic Calculator
=====================

Mubashir created a function that takes two numbers a and b and an operator o. His function should return the result of the corresponding mathematical function on both numbers. If the operator is not one of the specified characters +, -, /, *, or if there is a division by zero, the function should return -1. Help him by fixing the code in the code tab to pass this challenge.

Look at the examples below to get an idea of what the function should do:

Examples
basicCalculator(2, '+',  4) ? 6

basicCalculator(6, '-', 5) ? 1

basicCalculator(12, '/', 3) ? 4

basicCalculator(3, '*', 4) ? 12

basicCalculator(1, '/', 0) ? -1
// Division by zero is not possible

basicCalculator(1, 'x', 0) ? -1
// 'x' is not an operator
Notes
N/A

*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

using namespace std;
int basicCalculator(int a, char o, int b) {
	 int result = 0;
	 if(o == '+') 	 return a + b;
	 else if(o == '-') 	 return a - b;
	 else if(o == '*') 	 return a * b;
	 else if(o == '/' && b != 0)  return a / b;
	 else result=-1;
	 return result; 
}

int main(){
	cout <<  basicCalculator(2, '+',  4)  << endl ;
	cout <<  basicCalculator(6, '-', 5)  << endl ;
	cout <<  basicCalculator(12, '/', 3) << endl ;
	cout <<  basicCalculator(3, '*', 4)   << endl ;
	cout <<  basicCalculator(1, '/', 0)  << endl ;
	return 0;
}




/*
basicCalculator(2, '+',  4) ? 6

basicCalculator(6, '-', 5) ? 1

basicCalculator(12, '/', 3) ? 4

basicCalculator(3, '*', 4) ? 12

basicCalculator(1, '/', 0) ? -1

*/
