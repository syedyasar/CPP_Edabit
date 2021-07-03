/*
Source: Edabit
Link : https://edabit.com/challenge/e48LBR3FTYN8KSnjh
Date: 07/01/2021

On/Off Switches
================

Create a function that returns how many possible arrangements can come from a certain number of switches (on / off). In other words, for a given number of switches, how many different patterns of on and off can we have?

Examples
posCom(1) ? 2

posCom(3) ? 8

posCom(10) ? 1024
Notes
All numbers will be whole and positive.
*/

#include<iostream>
#include<vector>


#include<cmath>
using namespace std;
int posCom(int n) {
	return pow(2,n);
}

int main(){
	cout << posCom(1)   << endl;
	cout << posCom(3) << endl;	
	cout << posCom(10)  << endl;		
	return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

posCom(1) ? 2

posCom(3) ? 8

posCom(10) ? 1024
*/
