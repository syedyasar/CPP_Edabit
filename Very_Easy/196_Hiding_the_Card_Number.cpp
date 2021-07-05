/*
Source: Edabit
Link : https://edabit.com/challenge/yscYC6k8SdHomxgEr
Date: 07/05/2021

Hiding the Card Number
========================

Write a function that takes a credit card number and only displays the last four characters. The rest of the card number must be replaced by ************.

Examples
cardHide("1234123456785678") ? "************5678"

cardHide("8754456321113213") ? "************3213"

cardHide("35123413355523") ? "**********5523"
Examples
Ensure you return a string.
The length of the string must remain the same as the input.

*/
#include<iostream>
using namespace std;
string cardHide(string c) {
	string ans = "";
	for(int i=0;i<c.size()-4;i++){	ans+="*";	}
	for(int i=c.size()-4;i<c.size();i++){	ans+=c[i];}
	return ans;
}

/*
Solution 2:


*/

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
