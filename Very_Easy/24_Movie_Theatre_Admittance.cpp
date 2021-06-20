/*
Source: Edabit
Link :  https://edabit.com/challenge/6uHCwDwACpRp5at5F
Date: 06/19/2021


Movie Theatre Admittance
==========================

Write a function that checks whether a person can watch an MA15+ rated movie. One of the following two conditions is required for admittance:

The person is at least 15 years old.
They have parental supervision.
The function accepts two parameters, age and isSupervised. Return a boolean.

Examples
acceptIntoMovie(14, true) ? true

acceptIntoMovie(14, false) ? false

acceptIntoMovie(16, false) ? true
Notes
age is an integer.
isSupervised is a boolean.

*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

using namespace std;

bool acceptIntoMovie(int age, bool isSupervised) {
	return age>=15 || isSupervised;
}
int main(){
	
	cout << acceptIntoMovie(14, true) << endl ;  
	cout << acceptIntoMovie(14, false)  << endl ;	
	cout << acceptIntoMovie(16, false)  << endl ;	
	
}

/*
acceptIntoMovie(14, true) ? true

acceptIntoMovie(14, false) ? false

acceptIntoMovie(16, false) ? true

*/
