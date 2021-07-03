/*
Source: Edabit
Link : https://edabit.com/challenge/XDx6JoaumAimRHgEt
Date: 07/01/2021

Add up the Numbers from a Single Number
=========================================

Create a function that takes a number as an argument. Add up all the numbers from 1 to the number you passed to the function. For example, if the input is 4 then your function should return 10 because 1 + 2 + 3 + 4 = 10.

Examples
addUp(4) ? 10

addUp(13) ? 91

addUp(600) ? 180300
Notes
Expect any positive number between 1 and 1000.
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int addUp(int n) {
	return n*(n+1)/2;
}

int main() {
    cout << addUp(4)    << endl;
    cout << addUp(13)   << endl;
    cout << addUp(600)  << endl;
    return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

addUp(4) ? 10

addUp(13) ? 91

addUp(600) ? 180300

*/
