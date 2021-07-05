/*
Source: Edabit
Link : https://edabit.com/challenge/MgjW7y6SZajHKF7GN
Date: 07/04/2021

Height of an Equilateral Triangle
===================================

Create a function that takes the length of the side of an equilateral triangle in centimeters and returns the height of the triangle in millimeters.

Examples
height(2) ? "17.3 mm"

height(5) ? "43.3 mm"

height(6.2) ? "53.7 mm"
Notes
Return the answer rounded to one decimal place and in the format shown in the examples above.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string height(double side) {
	int t= ((int)round(side*1.732*5 *10));
	return to_string(t/10) +"." + to_string(t%10) + " mm";
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
