/*
Source: Edabit
Link : https://edabit.com/challenge/CK8njiYG875azaPZh
Date: 06/19/2021



Return Negative
=================

Create a function that takes a number as an argument and returns negative of that number. Return negative numbers without any change.

Examples
returnNegative(4) ? -4

returnNegative(15) ? -15

returnNegative(-4) ? -4

returnNegative(0) ? 0
Notes
N/A

*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

using namespace std;

int returnNegative(int n) {
	return n>0?-n:n;
}

int main(){
cout << 	returnNegative(4) << endl;  //  -4
cout << 	returnNegative(15)<< endl;  // -15
cout << 	returnNegative(-4)  << endl;  // -4
cout << 	returnNegative(0) << endl;  // 0
}

/*
returnNegative(4) ? -4

returnNegative(15) ? -15

returnNegative(-4) ? -4

returnNegative(0) ? 0

*/
