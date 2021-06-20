/*
Source: Edabit
Link : https://edabit.com/challenge/QQg9g2Z2Cfcctiv2e
Date: 06/19/2021


Fix the Broken Code
=====================

A student learning C++ was trying to make a function that sorts all the letters of a word, but their code is broken, and they can't figure out why.

Spot and fix the error(s) in the code to make the function work.

Examples
sortWord("dcba") ? "abcd"

sortWord("Unpredictable") ? "Uabcdeeilnprt"

sortWord("pneumonoultramicroscopicsilicovolcanoconiosis") ? "aacccccceiiiiiilllmmnnnnooooooooopprrsssstuuv"
Notes
Input is a word.


*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

using namespace std;

string sortWord(string s) {
	sort(s.begin(), s.end());
	return s;
}


int main() {
	
cout <<   sortWord("dcba")  << endl; //  "abcd"
cout<<    sortWord("Unpredictable")  << endl; // "Uabcdeeilnprt"
cout <<   sortWord("pneumonoultramicroscopicsilicovolcanoconiosis") << endl; // "aacccccceiiiiiilllmmnnnnooooooooopprrsssstuuv"
	
return 0; 
}

/*
sortWord("dcba") ? "abcd"

sortWord("Unpredictable") ? "Uabcdeeilnprt"

sortWord("pneumonoultramicroscopicsilicovolcanoconiosis") ? "aacccccceiiiiiilllmmnnnnooooooooopprrsssstuuv"
*/
