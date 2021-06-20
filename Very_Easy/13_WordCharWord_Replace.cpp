/*
Source: Edabit
Link : https://edabit.com/challenge/nXDY8Tt7jPftvKkGX
Date: 06/19/2021



WordCharWord
==================

Create a function that will put the first argument, a character, between every word in the second argument, a string.

Examples
add("R", "javascript is fun") ? "javascriptRisRfun"

add("#", "hello world!") ? "hello#world!"

add("#", " ") ? "#"
Notes
Make sure there are no spaces between words when returning the function.

*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

using namespace std;
/*
string add(char a,string s) {
	for(int i=0; s[i]!='\0';i++){
		if(s[i]==' ')
	    s[i]=a;
	}
	return s;
}
*/

string add(char a,string s) {
	replace(s.begin(), s.end(),' ',a);
	return s;
}

int main(){
cout << 	add('R', "javascript is fun") << endl;  // "javascriptRisRfun"

cout << 	add('#', "hello world!") << endl;  //  "hello#world!"

cout << 	add('#', " ") << endl;  //"#"
}

/*
add("R", "javascript is fun") ? "javascriptRisRfun"

add("#", "hello world!") ? "hello#world!"

add("#", " ") ? "#"

*/
