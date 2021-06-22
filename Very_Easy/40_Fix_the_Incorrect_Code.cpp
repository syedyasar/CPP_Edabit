/*
Source: Edabit
Link : https://edabit.com/challenge/gBaLDqeGSmFbHGJE7
Date: 06/20/2021

Find the Bug: Checking Even Numbers
====================================

Create a function that takes in an array and returns true if all its values are even, and false otherwise.

Not a big deal, your friend says. He writes the following code:

bool checkAllEven(std::vector<int> v) {
 return (std::all_of(v.cbegin(), v.cend(), [](int i){ return i % 2 != 0; }))
}
Fix the code above so that all tests pass:

Examples
checkAllEven([1, 2, 3, 4]) ? false

checkAllEven([2, 4, 6]) ? true

checkAllEven([5, 6, 8, 10]) ? false

checkAllEven([-2, 2, -2, 2]) ? true
Notes
For help, check Resources or ask a question in the Comments.

*/

#include <iostream>
#include <string>
#include<vector>

// Fix this incorrect code!
#include <algorithm> 
using namespace std;

bool checkAllEven(vector<int> v) {
   return (all_of(v.cbegin(), v.cend(), [](int i){ if(i % 2 != 0) return false ; }));
}

int main(){
  cout << checkAllEven({1, 2, 3, 4}) << endl;
  cout << checkAllEven({2, 4, 6}) << endl; 
  cout << checkAllEven({5, 6, 8, 10})  << endl; 
  cout << checkAllEven({-2, 2, -2, 2})  << endl; 
  return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

checkAllEven({1, 2, 3, 4}) ? false

checkAllEven({2, 4, 6}) ? true

checkAllEven({5, 6, 8, 10}) ? false

checkAllEven({-2, 2, -2, 2}) ? true

*/
