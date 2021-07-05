/*
Source: Edabit
Link : https://edabit.com/challenge/9gEKwRjTYmXwmhzTP
Date: 07/02/2021

C String to C++ String
========================

This is a C string:

{"H", "e", "l", "l", "o", "!", "\0"}
In C, you could also type "Hello!" when declaring a char [n+1] type. N is the size of the string "Hello!", but +1 is there because of "\0". In C++, it looks like "Hello!". The "\0" char is the end of a string, and it isn't written in the string.

Create a function that will return a C++ string from the given C string.

Examples
cppStr({"H", "i", "!", "\0"}) ? "Hi!"

cppStr({"H", "e", "l", "l", "o", "!", "\0"}) ? "Hello!"

cppStr({"J", "A", "V", "a", "\0"}) ? "JAVa"
Notes
N/A
*/

#include<iostream>
#include<vector>
using namespace std;
string cppStr(vector <char> cStr){
	string cppStr ="";
	for(int i=0; cStr[i]!='\0';i++)
		cppStr+=cStr[i];
	return cppStr;
}

/*
Solution 2:
string cppStr(const vector<char> cStr)
{
	return string(cStr.begin(), cStr.end() - 1);
}

Solution 3:
string cppStr(vector <char> cStr){
	string str=&cStr[0];
	return str;
}
*/


/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
