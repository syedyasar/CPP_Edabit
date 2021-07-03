/*
Source: Edabit
Link : https://edabit.com/challenge/hCj3FTaBci3vvJP3N
Date: 06/29/2021

Come Check Out This Crazy Function
====================================

You are given two numbers, a and b. Write a function which uses an expression to return the expected output. I am not going to tell you what the expression is because that will spoil the fun! :)

Examples
crazyfunction(10, 20) ? 30

crazyfunction(17, 35) ? 50

crazyfunction(61, 233) ? 212
Notes
Hint: Notice the tags?

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


int crazyfunction(int a, int b) {
	return a^b;
}

int main(){
	cout <<  crazyfunction(10, 20)   << endl;
	cout <<  crazyfunction(17, 35)   << endl;	
	cout <<  crazyfunction(61, 233)  << endl;		
	return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

crazyfunction(10, 20) ? 30

crazyfunction(17, 35) ? 50

crazyfunction(61, 233) ? 212

Notes

*/
