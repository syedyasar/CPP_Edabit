/*
Source: Edabit
Link : https://edabit.com/challenge/efDG4PvvgKFPFxw9A
Date: 07/02/2021

Primitive Darts Game
=====================
Darts is a target game played by throwing feathered darts at a circular board with numbered spaces. Our darts game is the simplest of all games. The score of a single turn is calculated based on the distance from the middle. You need to create a function that takes dart location as two cartesian coordinates x, y and returns a score based on the distance from the middle aka Bullseye (x=0, y=0).

Bullseye and inner circle scores = 10 points
Middle ring scores = 5 points
Outer ring scores = 1 point
Outside the target = 0 points
We play it simple so dart in the double or treble ring counts as usual and do not affect the segment score.

Board and circle radius is as follows:

Board radius and outer circle radius = 10 units
Middle circle radius = 5 units
Inner circle radius = 1 unit
Short Description
Convert cartesian coordinates(x, y) to polar coordinates (R, phi). And return score based on R value. R >10 gives 0 points, 10 >= R > 5 gives 1 points , 5 >= R > 1 gives 5 points , R<=1 gives 10 points.

Examples
dartsScoring(0, 0) ? 10

dartsScoring(3, 2) ? 5

dartsScoring(0, -0.8) ? 10
Notes
X, Y values can be both positive and negative.
X, Y values can be int and float.
No wrong type values will be given.

*/

#include<iostream>
#include<vector>
#include<cmath>
int dartsScoring(double x, double y) {
	if(x*x+y*y<=1) return 10;
	else if(x*x+y*y<=25  ) return 5;
	else if(x*x+y*y<=100) return 1;
	else  return 0;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1

dartsScoring(0, 0) ? 10

dartsScoring(3, 2) ? 5

dartsScoring(0, -0.8) ? 10

*/
