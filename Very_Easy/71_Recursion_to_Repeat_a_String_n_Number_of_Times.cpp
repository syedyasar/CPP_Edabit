/*
Source: Edabit
Link : https://edabit.com/challenge/hy3NX58sMe3nbGYg9
Date: 06/29/2021


Recursion to Repeat a String n Number of Times
================================================

Create a recursive function that takes two parameters and repeats the string n number of times. The first parameter txt is the string to be repeated and the second parameter is the number of times the string is to be repeated.

Examples
repetition("ab", 3) ? "ababab"

repetition("kiwi", 1) ? "kiwi"

repetition("cherry", 2) ? "cherrycherry"
Notes
The second parameter of the function is positive integer.

*/

#include <iostream>
#include<vector>
using namespace std;
string repetition(string txt, int n) {
	if(n==0)  return "";
	else return repetition(txt, n-1) + txt; 
}

int main(){
	cout << repetition("ab", 3)      << endl ;
	cout << repetition("kiwi", 1)    << endl ;
	cout << repetition("cherry", 2)  << endl ;
	return 0;
}



/*

Online Compiler : https://replit.com/languages/cpp?v2=1

repetition("ab", 3) ? "ababab"

repetition("kiwi", 1) ? "kiwi"

repetition("cherry", 2) ? "cherrycherry"
Notes

*/
