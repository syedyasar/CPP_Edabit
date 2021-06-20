/*
Source: Edabit
Link : https://edabit.com/challenge/cdQxvCFqAsAYQcpFr
Date: 06/19/2021

The Forbidden Letter
==========================

Given a letter and an array of words, return whether the letter does not appear in any of the words.

Examples
forbiddenLetter('r', ["rock", "paper", "scissors"]) ? false

forbiddenLetter('a', ["spoon", "fork", "knife"]) ? true

forbiddenLetter('m', []) ? true
Notes
All inputs given will be in lowercase.
You will always be given a forbidden letter, but there may be empty arrays.



*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

using namespace std;

bool forbiddenLetter(char c, vector<string> a) {
	for(int i=0;i< a.size(); i++ ){
      if(a[i].find(c)!=-1)
        return false;
    }
  return true;
}


