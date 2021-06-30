/*
Source: Edabit
Link : https://edabit.com/challenge/xL5xcGcZcZY8srSzz
Date: 06/29/2021


Add, Subtract, Multiply or Divide?
====================================

Write a function that takes two numbers and returns if they should be added, subtracted, multiplied or divided to get 24. If none of the operations can give 24, return "Invalid".

Examples
operation(15, 9) ? "added"

operation(26, 2) ? "subtracted"

operation(11, 11) ? "Invalid"
Notes
Only integers are used as test input.
Numbers should be added, subtracted, divided or multiplied in the order they appear in the parameters.
The function should return either "added", "subtracted", "divided", "multiplied" or "Invalid".

*/

#include <iostream>
#include<vector>
using namespace std;
string operation(int n1, int n2) {
	if(n1+n2==24) return "added";
	else if(n1-n2==24) return "subtracted";
	else if (n1*n2==24) return "multiplied";
	else if (n1/n2==24) return "divided";
	else return "Invalid";
}


int main(){
	cout << operation(15, 9)        << endl ;
	cout << operation(26, 2)        << endl ;
	cout << operation(11, 11)       << endl ;
	return 0;
}



/*

Online Compiler : https://replit.com/languages/cpp?v2=1

operation(15, 9) ? "added"

operation(26, 2) ? "subtracted"

operation(11, 11) ? "Invalid"

Notes

*/
