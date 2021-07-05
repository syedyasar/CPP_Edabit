/*
Source: Edabit
Link : https://edabit.com/challenge/wF7J6c2zyNpPjwr4s
Date: 07/02/2021

Typing Game
=============

You're in the midst of creating a typing game.

Create a function that takes in two arrays: the array of user-typed words, and the array of correctly-typed words and outputs an array containing 1s (correctly-typed words) and -1s (incorrectly-typed words).

Inputs:
User-typed Array: ["cat", "blue", "skt", "umbrells", "paddy"]
Correct Array: ["cat", "blue", "sky", "umbrella", "paddy"]

Output: [1, 1, -1, -1, 1]
Examples
correctStream(
  ["it", "is", "find"],
  ["it", "is", "fine"]
) ? [1, 1, -1]

correctStream(
  ["april", "showrs", "bring", "may", "flowers"],
  ["april", "showers", "bring", "may", "flowers"]
) ? [1, -1, 1, 1, 1]
Notes
The input array lengths will always be the same.
*/

#include<iostream>
#include<vector>
using namespace std;
vector<int> correctStream(vector<string> user, vector<string> correct) {
	vector<int>  a;
	for(int i=0;i<user.size();i++){
		if(user[i]==correct[i]) a.push_back(1);
		else a.push_back(-1);
	}
	return a;
}
/*
Solution 2:
using namespace std;
vector<int> correctStream(vector<string> user, vector<string> correct) {
	vector<int> result;
	
	for(int i = 0; i < user.size(); ++i){
		result.push_back((user[i]==correct[i]?1:-1));
	}
	
	return result;
}


*/


/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
