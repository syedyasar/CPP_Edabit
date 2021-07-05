/*
Source: Edabit
Link : https://edabit.com/challenge/K7LELsNXXqpGd3yYW
Date: 07/02/2021

Hashes and Pluses
===================

Create a function that returns the number of hashes and pluses in a string.

Examples
hashPlusCount("###+") ? [3, 1]

hashPlusCount("##+++#") ? [3, 3]

hashPlusCount("#+++#+#++#") ? [4, 6]

hashPlusCount("") ? [0, 0]
Notes
Return [0, 0] for an empty string.
Return in the order of [hashes, pluses].
*/

#include<iostream>
#include<vector>
using namespace std;
vector<int> hashPlusCount(string s) {
	vector<int> a={0,0};
	for(char x:s){
		if(x=='#') a[0]++;
	  else if(x=='+') a[1]++;		
	}
  return a;
}



/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
