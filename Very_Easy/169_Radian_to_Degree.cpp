/*
Source: Edabit
Link : https://edabit.com/challenge/Cn5DXenY43QkutRbf
Date: 07/03/2021

Radian to Degree
Create a function that takes an angle in radians and converts it into degrees.

Examples
toDegree(pi()) ? 180

toDegree(pi()/2) ? 90

toDegree(pi()/4) ? 45
Notes
The input angles are in radians.
Check out the Resources tab.
There are 360 degrees and 2 pi radians in a circle. So to convert degrees to radians, 
divide by 360 and multiply by 2 * pi (approx. 6.28). Or equivalently, divide by 180 
and multiply by pi.
*/

#include<iostream>
#include<vector>
#include <cmath>
float pi(void){
	return M_PI;
}

int toDegree(float radian) {
	//implement your code here
	return radian*180/M_PI;
}

/*



*/


/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
