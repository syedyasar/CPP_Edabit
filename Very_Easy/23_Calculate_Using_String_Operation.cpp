/*
Source: Edabit
Link :  https://edabit.com/challenge/LfHnaciZjtjy2oSRY
Date: 06/19/2021


Calculate Using String Operation
==================================

Create a function that takes two numbers and a mathematical operator and returns the result.

Examples
calculate(4, 9, "+") ? 13

calculate(12, 5, "-") ? 7

calculate(6, 3, "*") ? 18

calculate(25, 5, "/") ? 5

calculate(14, 3, "%") ? 2
Notes
Numbers can be negative.
The only operations used are those in the examples above.

*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

using namespace std;

int calculate(int n1, int n2, char op) {
	if(op=='+') return n1+n2;
	else if(op=='-') return n1-n2;
	else if(op=='*') return n1*n2;	
	else if(op=='/') return n1/n2;	
	else if(op=='%') return n1%n2;		
}

int main(){
	cout << calculate(4, 9, '+')  << endl ;  
	cout << calculate(12, 5, '-')  << endl ;	
	cout << calculate(6, 3, '*')  << endl ;	
	cout << calculate(25, 5, '/')  << endl ;	
	cout << calculate(14, 3, '%')   << endl ;		
}

/*
calculate(4, 9, "+") ? 13

calculate(12, 5, "-") ? 7

calculate(6, 3, "*") ? 18

calculate(25, 5, "/") ? 5

calculate(14, 3, "%") ? 2

*/
