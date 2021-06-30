/*
Source: Edabit
Link : https://edabit.com/challenge/Fz9QawvPXwxCSGr2d
Date: 06/29/2021


Missing Third Angle
=======================
You are given 2 out of 3 angles in a triangle, in degrees.

Write a function that classifies the missing angle as either "acute", "right", or "obtuse" based on its degrees.

An acute angle is less than 90 degrees.
A right angle is exactly 90 degrees.
An obtuse angle is greater than 90 degrees (but less than 180 degrees).
For example: missingAngle(11, 20) should return "obtuse", since the missing angle would be 149 degrees, which makes it obtuse.

Examples
missingAngle(27, 59) ? "obtuse"

missingAngle(135, 11) ? "acute"

missingAngle(45, 45) ? "right"
Notes
The sum of angles of any triangle is always 180 degrees.

*/

#include <iostream>
using namespace std;
string missingAngle(int a1, int a2) {
if(a1+a2<90) return  "obtuse";
else if(a1+a2>90) return "acute" ;
else return "right" ;
}

int main(){
	cout << missingAngle(27, 59)      << endl ;
	cout << missingAngle(135, 11)     << endl ;
	cout << missingAngle(45, 45)      << endl ;
	return 0;
}



/*

Online Compiler : https://replit.com/languages/cpp?v2=1

missingAngle(27, 59) ? "obtuse"

missingAngle(135, 11) ? "acute"

missingAngle(45, 45) ? "right"

Notes

*/
