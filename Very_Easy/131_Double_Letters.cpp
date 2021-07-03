/*
Source: Edabit
Link : https://edabit.com/challenge/cGmQnqK4FPsd5TLCP
Date: 07/02/2021

Double Letters
================

Create a function that takes a word and returns true if the word has two consecutive identical letters.

Examples
double_letters("loop") ? true

double_letters("yummy") ? true

double_letters("orange") ? false

double_letters("munchkin") ? false
Notes
N/A
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool double_letters(string w) {
	for(int i=0;i<w.size()-1;i++)
		if(w[i]==w[i+1]) return 1;
	return 0;

}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1

double_letters("loop") ? true

double_letters("yummy") ? true

double_letters("orange") ? false

double_letters("munchkin") ? false

*/
