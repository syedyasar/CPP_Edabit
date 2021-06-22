/*
Source: Edabit
Link : https://edabit.com/challenge/vxyyw6gjgaaoRzXEA
Date: 06/19/2021

Return a String as an Integer
==============================

Create a function that takes a string and returns it as an integer.

Examples
StringInt("6") ? 6

StringInt("1000") ? 1000

StringInt("12") ? 12
Notes
All numbers will be whole.
All numbers will be positive.

*/

#include <iostream>
#include <string>
//#include<vector>
#include <algorithm>
using namespace std;
int StringInt(string str) {
	return stoi(str);
}

int main(){
  cout << StringInt("6") << endl;
  cout << StringInt("1000") << endl;
  cout << StringInt("12") << endl;  
  return 0;
}

/*
Use Online - Compiler : https://replit.com/languages/cpp?v2=1


StringInt("6") ? 6

StringInt("1000") ? 1000

StringInt("12") ? 12

*/
