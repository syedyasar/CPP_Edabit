/*
Source: Edabit
Link : https://edabit.com/challenge/WSkAy6p8yC3PYgKzE
Date: 06/20/2021

Next Number Greater Than A and B and Divisible by B
======================================================

You are given two numbers a and b. Create a function that returns the next number greater than a and b and divisible by b.

Examples
divisibleByB(17, 8) ? 24

divisibleByB(98, 3) ? 99

divisibleByB(14, 11) ? 22
Notes
a will always be greater than b.

*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>
using namespace std;


int divisibleByB(int a, int b) {
	return a + b - a%b ; 
}

int main(){
  cout << divisibleByB(17, 8) << endl;
  cout << divisibleByB(98, 3) << endl; 
  cout << divisibleByB(14, 11) << endl; 
  return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

divisibleByB(17, 8) ? 24

divisibleByB(98, 3) ? 99

divisibleByB(14, 11) ? 22

*/
