/*
Source: Edabit
Link : https://edabit.com/challenge/tBE5DRbLesaR3SBxF
Date: 06/20/2021


Recursion: Sum of Multiplication
==================================

Given a number, return the total sum of that number multiplied by every number between 1 and 10.

Examples
multiSum(1) ? 55
// 1 x 1 + 1 x 2 + 1 x 3 ...... 1 x 9 + 1 x 10 = 55

multiSum(6) ? 330
// 6 x 1 + 6 x 2 + 6 x 3 ...... 6 x 9 + 6 x 10 = 330

multiSum(10) ? 550

multiSum(8) ? 440

multiSum(2) ? 110
Notes
Use recursion to solve this challenge.

*/


#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>
using namespace std;

/* Solution 1 Without Recursion:

int multiSum(int num, int ten=10) {
	return num*55; 
}

*/

int multiSum(int num, int ten=10) {
    if(ten==1) 
      return num;
	else  
      return num*ten + multiSum(num,ten-1);
}


int main(){
  cout << multiSum(1) << endl;
  return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

multiSum(1) ? 55

multiSum(10) ? 550

multiSum(8) ? 440

multiSum(2) ? 110

Notes
*/
