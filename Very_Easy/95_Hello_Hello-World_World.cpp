/*
Source: Edabit
Link : https://edabit.com/challenge/3EXzfcnL8XGCf582x
Date: 06/30/2021

Hello; Hello World; World
============================

Write a function that takes an integer and:

If the number is a multiple of 3, return "Hello".
If the number is a multiple of 5, return "World".
If the number is a multiple of both 3 and 5, return "Hello World".
Examples
helloWorld(3) ? "Hello"

helloWorld(5) ? "World"

helloWorld(15) ? "Hello World"
Notes
Don't forget to return the result.
*/


#include<vector>
#include<cmath>


#include<iostream>
#include<string>
#include <cctype>
using namespace std;
string helloWorld(int n) {
	if(n%15==0) return "Hello World";
	else if(n%3==0) return "Hello";
	else if(n%5==0) return "World";
}

int main(){
    cout << helloWorld(3)   << endl;
	cout << helloWorld(5) << endl;	
	cout << helloWorld(15)   << endl;		
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

helloWorld(3) ? "Hello"

helloWorld(5) ? "World"

helloWorld(15) ? "Hello World"
Notes

*/
