/*
Source: Edabit
Link : https://edabit.com/challenge/88vA594TjLY6gYCSw
Date: 07/01/2021

Narcissistic Number
=====================

A Narcissistic Number is a number that is the sum of its own digits each raised to the power of the number of digits.

For example, take 153 (3 digits), which is narcisstic:

1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
1652 (4 digits), is non-narcisstic:

1^4 + 6^4 + 5^4 + 2^4 = 1 + 1296 + 625 + 16 = 1938
Create a function that returns true or false depending upon whether the given number n is a Narcissistic number or not.

Examples
isNarcissistic(153) ? true

isNarcissistic(370) ? true

isNarcissistic(1652) ? false
Notes
N/A
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


bool isNarcissistic(int n) {
	int k=n, s=0,t,l=0;
	while(n) {n/=10;l++;}
	n=k;
	while(n){	t=n%10;	  s+=pow(t,l);  n/=10; 	}
	return s==k;
}

int main(){
	cout << isNarcissistic(153)    << endl;
	cout << isNarcissistic(370)    << endl;	
	cout << isNarcissistic(1652)   << endl;		
	return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

isNarcissistic(153) ? true

isNarcissistic(370) ? true

isNarcissistic(1652) ? false

*/
