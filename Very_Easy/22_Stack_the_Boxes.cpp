/*
Source: Edabit
Link :  https://edabit.com/challenge/fjABkcxPwwmo8r2ux
Date: 06/19/2021



Stack the Boxes
=================

Here's an image of four models. Some of the cubes are hidden behind other cubes. Model one consists of one cube. Model two consists of four cubes, and so on...

Stack the Boxes

Write a function that takes a number n and returns the number of stacked boxes in a model n levels high, visible and invisible.

Examples
stackBoxes(1) ? 1

stackBoxes(2) ? 4

stackBoxes(0) ? 0
Notes
Step n is a positive integer.


*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

using namespace std;

int stackBoxes(int n) {
	return n*n;
}


int main(){
	cout << stackBoxes(1)   << endl ;
	cout << stackBoxes(2)   << endl ;	
	cout << stackBoxes(0)   << endl ;	
	
}

/*
stackBoxes(1) ? 1

stackBoxes(2) ? 4

stackBoxes(0) ? 0

*/
