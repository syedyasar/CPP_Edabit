/*
Source: Edabit
Link : https://edabit.com/challenge/8NQyQeuLCyjchjPkD
Date: 07/04/2021

Same ASCII?
===============

Return true if the sum of ASCII values of the first string is same as the sum of ASCII values of the second string, otherwise return false.

Examples
sameAscii("a", "a") ? true

sameAscii("AA", "B@") ? true

sameAscii("EdAbIt", "EDABIT") ? false
Notes
If you need some help with ASCII codes, check the Resources tab for an image of all ASCII codes used in this challenge.
*/

#include<iostream>
#include<vector>
bool sameAscii(std::string a, std::string b) {
	int a1=0, b1=0;
	for(int i=0; i <a[i]!='\0' ; i++)  a1+=(int)a[i];
	for(int i=0; i< b[i]!='\0' ; i++)  b1+=(int)b[i];
	return a1==b1;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
