/*
Source: Edabit
Link : https://edabit.com/challenge/QuuHXmkvrtErDBj88
Date: 06/30/2021

Jay and Silent Bob Weight Convertor
=====================================

Jay and Silent Bob have been given a fraction of an ounce but they only understand grams. Given an ounce weighs 28.3495 grams, convert the amount of ounces to grams. Round the number of grams to one decimal place.

Examples
jayAndBob("half") ? "14 grams"

jayAndBob("quarter") ? "7 grams"

jayAndBob("eighth") ? "3.5 grams"
Notes
Add the string "grams" to the end with a space.


*/

#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;

string jayAndBob(string str) {
	if(str=="half") return "14 grams";
	else if(str=="quarter") return "7 grams";
	else if(str=="eighth") return "3.5 grams";	
	else if(str=="sixteenth") return "1.75 grams";						
}


int main(){
	cout << jayAndBob("half") << endl;
	cout << jayAndBob("quarter") << endl;	
	cout << jayAndBob("eighth")<< endl;	
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1

jayAndBob("half") ? "14 grams"

jayAndBob("quarter") ? "7 grams"

jayAndBob("eighth") ? "3.5 grams"
Notes

*/
