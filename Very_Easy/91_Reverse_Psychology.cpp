/*
Source: Edabit
Link : https://edabit.com/challenge/w3Df6bNETySEWa2gf
Date: 06/30/2021

Reverse Psychology
===================

For this challenge, you will NOT be given a string. Your task isn't to add "Do not" before the given string. If there is no given string, you will not return "Do not do anything." Do not check the examples to know how to do this challenge.

Examples
reversePsychology("wash the dishes") ? "Do not wash the dishes."

reversePsychology("eat your lunch") ? "Do not eat your lunch."

reversePsychology("go to school") ? "Do not go to school."
Notes
Are available.


*/

#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;

using namespace std;
string reversePsychology(string s="do anything") {
	return "Do not "+ s +".";
}


int main(){
	cout << reversePsychology("wash the dishes") << endl;
	cout << reversePsychology("eat your lunch")  << endl;	
	cout << reversePsychology("go to school")    << endl;	
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1

reversePsychology("wash the dishes") ? "Do not wash the dishes."

reversePsychology("eat your lunch") ? "Do not eat your lunch."

reversePsychology("go to school") ? "Do not go to school."

Notes

*/
