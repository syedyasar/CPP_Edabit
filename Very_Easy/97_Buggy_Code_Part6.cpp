/*
Source: Edabit
Link : https://edabit.com/challenge/ebQDyQYgs9Hd5jo3K
Date: 06/30/2021

Buggy Code (Part 6)
Mubashir wants to remove numbers from a given string!

Help him by fixing the code in the code tab to pass this challenge. Look at the examples below to get an idea of what the function should do.

Examples
removeNumbers("mubashir1") ? "mubashir"

removeNumbers("12ma23tt") ? "matt"

removeNumbers("e1d2a3b4i5t6") ? "edabit"
Notes
READ EVERY WORD CAREFULLY, CHARACTER BY CHARACTER!
Don't overthink this challenge; it's not supposed to be hard.

*/

#include<iostream>
#include<vector>

using namespace std;
string removeNumbers(string s) {
	string ans="";
	for(int i=0;s[i]!='\0';i++){
		if(!isdigit(s[i])) ans+=s[i];
	}
  return ans;
}

int main(){
	cout << removeNumbers("mubashir1")    << endl;
	cout << removeNumbers("12ma23tt")     << endl;	
	cout << removeNumbers("e1d2a3b4i5t6") << endl;	
	return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

removeNumbers("mubashir1") ? "mubashir"

removeNumbers("12ma23tt") ? "matt"

removeNumbers("e1d2a3b4i5t6") ? "edabit"

*/
