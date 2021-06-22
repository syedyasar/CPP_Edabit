/*
Source: Edabit
Link : https://edabit.com/challenge/4hE53ptSF6n9kBw8s
Date: 06/19/2021

Front 3 - Slice Check Repeat Concatenate
==========================================

Create a function that takes a string; we'll say that the front is the first three characters of the string. If the string length is less than three characters, the front is whatever is there. Return a new string, which is three copies of the front.

Examples
frontThree("Python") ? "PytPytPyt"

frontThree("Cucumber") ? "CucCucCuc"

frontThree("bioshock") ? "biobiobio"
Notes
Don't forget to return the result.

*/

#include <iostream>
//#include <string>
//#include<vector>
//#include <algorithm>
using namespace std;
string frontThree(string str) {
	string t = str.substr(0,3);
	return t+t+t;
}

int main(){
	cout << frontThree("Python")  << endl;
	cout << frontThree("Cucumber") << endl;
	cout << frontThree("bioshock") << endl;
}

/*
frontThree("Python") ? "PytPytPyt"

frontThree("Cucumber") ? "CucCucCuc"

frontThree("bioshock") ? "biobiobio"

*/
