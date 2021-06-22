/*
Source: Edabit
Link : https://edabit.com/challenge/pZNuQv8FHYang5sq3
Date: 06/19/2021

Buggy Uppercase Counting
==========================


In the Code tab is a function which is meant to return how many uppercase letters there are in a list of various words. Fix the list comprehension so that the code functions normally!

Examples
countUppercase(["SOLO", "hello", "Tea", "wHat"]) ? 6

countUppercase(["little", "lower", "down"]) ? 0

counUppercase(["EDAbit", "Educate", "Coding"]) ? 5
Notes
Check the Resources for some array methods that might be helpful.

*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
using namespace std;

int countUppercase(vector<string> str) {
	int sum=0;
	for(auto word:str){
	  for (auto letter:word){
		if(isupper(letter)){
			sum++;
		}}}
	return sum;
}

int main(){
  cout << countUppercase({"SOLO", "hello", "Tea", "wHat"})  << endl;
  cout << countUppercase({"little", "lower", "down"})<< endl; 
  return 0;
}

/*
Use Online - Compiler : https://replit.com/languages/cpp?v2=1

countUppercase(["SOLO", "hello", "Tea", "wHat"]) ? 6

countUppercase(["little", "lower", "down"]) ? 0

counUppercase(["EDAbit", "Educate", "Coding"]) ? 5

*/
