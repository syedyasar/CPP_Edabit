/*
Source: Edabit
Link :  https://edabit.com/challenge/HZoEwrhESe9sjKoM5
Date: 06/19/2021



String Match by Two Letters
===============================


Create a function that takes two strings, a and b. Return the number of times the two strings contain the same two letters at the same index.

For example, if a = "bboiizz" and b = "bbuiiz", your function should return 3, since the "bb", "ii", and "iz" appear at the same place in both strings.

Examples
strMatchBy2char("yytaazz", "yyjaaz") ? 3

strMatchBy2char("edabit", "ed") ? 1

strMatchBy2char("", "") ? 0
Notes
Don't forget to return the result.
*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

using namespace std;

int strMatchBy2char(string a, string b) {
	int c=0;
	for(int i=0;i<a.size()-1; i++ ){
			if((a[i]==b[i]) && (a[i+1]==b[i+1]))
				 c++;
    }
		return c;
  }


int main(){
	
	cout << strMatchBy2char("yytaazz", "yyjaaz")   << endl ;
	cout << strMatchBy2char("edabit", "ed")        << endl ;	
	cout << strMatchBy2char("", "")                << endl ;	
	
}
/*
strMatchBy2char("yytaazz", "yyjaaz") 
? 3

strMatchBy2char("edabit", "ed") 
? 1

strMatchBy2char("", "") 
? 0

*/
