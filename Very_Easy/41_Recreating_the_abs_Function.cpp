/*
Source: Edabit
Link : https://edabit.com/challenge/NompZxQLEtYtrT6h5
Date: 06/20/2021

Recreating the abs() Function
=================================

The abs function returns the absolute value of a number. This means that it returns a number's positive value. You can think of it as the distance away from zero.

Create a function that recreates this functionality.

Examples
absolute(-5) ? 5

absolute(-3.14) ? 3.14

absolute(250) ? 250
Notes
Tests will only include valid numbers.

*/

#include <iostream>
//#include <string>
//#include<vector>
//#include <algorithm> 
using namespace std;

#include<cmath>
double absolute(double n) {
	return fabs(n);
}
int main(){
  cout << absolute(-5)  << endl;
  cout << absolute(-3.14)  << endl; 
  cout << absolute(250)<< endl; 
  return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

absolute(-5) ? 5

absolute(-3.14) ? 3.14

absolute(250) ? 250

*/
