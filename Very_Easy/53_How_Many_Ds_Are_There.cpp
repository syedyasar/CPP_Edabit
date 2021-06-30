/*
Source: Edabit
Link : https://edabit.com/challenge/ysRyajW5vY93Epu2k
Date: 06/25/2021


How Many D's Are There?
=========================

Create a function that counts how many D's are in a sentence.

Examples
countDs("My friend Dylan got distracted in school.") ? 4

countDs("Debris was scattered all over the yard.") ? 3

countDs("The rodents hibernated in their den.") ? 3
Notes
Your function must be case-insensitive.
Remember to return the result.
Check the Resources for help.

*/


#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>

using namespace std;
int countDs(string s) {
	int c1=0;
	for(int i=0;s[i]!='\0';i++){
		if(toupper(s[i])=='D')		c1++;
	}
	return c1;
}

int main(){
  cout << countDs("My friend Dylan got distracted in school.")  << endl;
  cout << countDs("Debris was scattered all over the yard.") << endl;
  cout << countDs("The rodents hibernated in their den.")   << endl;
  return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

countDs("My friend Dylan got distracted in school.") ? 4

countDs("Debris was scattered all over the yard.") ? 3

countDs("The rodents hibernated in their den.") ? 3
Notes
*/
