/*
Source: Edabit
Link : https://edabit.com/challenge/WrQWe2aY5D4FWXTSW
Date: 07/02/2021

Calculate Determinant of a 2x2 Matrix
========================================

Create a function to calculate the determinant of a 2 * 2 matrix. The determinant of the following matrix is: ad - bc:

[[a, b], [c, d]]
Examples
calc_determinant([
  [1, 2],
  [3, 4]
]) ? -2

// Since (1 x 4) - (2 x 3) = -2

calc_determinant([
  [5, 3],
  [3, 1]
]) ? -4

calc_determinant([
  [1, 1],
  [1, 1]
]) ? 0
Notes
Matrix will be in 2 * 2 form only.
*/

#include<iostream>
#include<vector>
#include<cmath>


using namespace std;
int calc_determinant(vector<vector<int>> a) {
	return a[0][0]*a[1][1] - a[1][0]*a[0][1];
}

int main(){
	
	cout << calc_determinant({{1, 2}, {3, 4}}) << endl;
	cout << calc_determinant({{5, 3}, {3, 1}}) << endl;	
	cout << calc_determinant({{1, 1}, {1, 1}}) << endl;
	cout << calc_determinant({{1, 1}, {1, 0}})  << endl;	
	return 0;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1

Describe(calculate_determinant)
{
	It(test1){Assert::That(calc_determinant({{1, 2}, {3, 4}}), Equals(-2));}
	It(test2){Assert::That(calc_determinant({{5, 3}, {3, 1}}), Equals(-4));}
	It(test3){Assert::That(calc_determinant({{1, 1}, {1, 1}}), Equals(0));}
	It(test4){Assert::That(calc_determinant({{1, 1}, {1, 0}}), Equals(-1));}
};
*/
