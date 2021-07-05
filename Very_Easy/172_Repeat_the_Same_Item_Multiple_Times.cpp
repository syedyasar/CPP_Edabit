/*
Source: Edabit
Link : https://edabit.com/challenge/Z3K7GkNWSjgZMoCDH
Date: 07/03/2021

Repeat the Same Item Multiple Times
=====================================

Create a function that takes two arguments (item, times). The first argument (item) is the item that needs repeating while the second argument (times) is the number of times the item is to be repeated. Return the result in an array.

Examples
repeat("edabit", 3) ? ["edabit", "edabit", "edabit"]

repeat("7", 2) ? ["7", "7"]

repeat("0", 0) ? []
Notes
item will be a string.
times will always be a number.
*/

#include<iostream>
#include<vector>
using namespace std;
vector<string> repeat(string item, int n) {
	vector<string> b;
	for(int i=1;i<=n;i++)
		b.push_back(item);
	return b;
}

*/
/*

Solution 2:

std::vector<std::string> repeat(std::string item, int times) {
	return std::vector<std::string>(times, item);
}

*/

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
