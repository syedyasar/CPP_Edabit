/*
Source: Edabit
Link : https://edabit.com/challenge/5Na4YnN4MY9x6W5Gc
Date: 06/30/2021

Remove the Letters ABC
========================

Create a function that will remove the letters "a", "b" and "c" from the given string and return the modified version. If the given string does not contain "a", "b", or "c", return "".

Examples
removeABC("This might be a bit hard") ? "This might e  it hrd"

removeABC("hello world!") ? ""

removeABC("") ? ""
Notes
If the given string does not contain "a", "b", or "c", return "".
*/


#include<vector>
#include<cmath>


#include<iostream>
#include<string>
#include <cctype>
using namespace std;
string removeABC(string s) {
	int c=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='a' || s[i]=='b' || s[i]=='c') {
			s.erase(i,1) ; c++;
		}
	}
	if(c==0) return "";
	else return s;
}
int main(){
    cout << removeABC("This might be a bit hard")   << endl;
	cout << removeABC("hello world!") << endl;	
	cout << removeABC("")   << endl;		
    cout << removeABC("This might be a bit hard")   << endl;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

removeABC("This might be a bit hard") ? "This might e  it hrd"

removeABC("hello world!") ? ""

removeABC("") ? ""
Notes

*/
