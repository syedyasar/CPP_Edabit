/*
Source: Edabit
Link : https://edabit.com/challenge/fYSK5CgnXEQy7skys
Date: 07/02/2021

Convert Number to String of Dashes
====================================

Create a function that takes a number (from 1 - 60) and returns a corresponding string of hyphens.

Examples
Go(1) ? "-"

Go(5) ? "-----"

Go(3) ? "---"
Notes
You will be provided integers ranging from 1 to 60.
Don't forget to return your result as a string.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string Go(int n) {
	string s="";
	for(int i=1;i<=n;i++)
	   s+='-';
	return s;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

Go(1) ? "-"

Go(5) ? "-----"

Go(3) ? "---"

*/
