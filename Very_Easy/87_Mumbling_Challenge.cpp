/*
Source: Edabit
Link : https://edabit.com/challenge/QkR3kkKEA6ojqM33h
Date: 06/30/2021

Mumbling Challenge
====================

Create a function that takes a string str and modifies the given string as per the below examples:

Examples
mumbling("MubAshIr") ? "M-Uu-Bbb-Aaaa-Sssss-Hhhhhh-Iiiiiii-Rrrrrrrr"

mumbling("maTT") ? "M-Aa-Ttt-Tttt"

mumbling("EdaBit") ? "E-Dd-Aaa-Bbbb-Iiiii-Tttttt"
Notes
N/A
*/

#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;


string mumbling(string s) {
	string ans="";
	for(int i=0;s[i]!='\0';i++){
		ans+= toupper(s[i]);
		s[i]=tolower(s[i]);
		for(int j=i;j!=0;j--){ans+=s[i];}
		if(i!=s.size()-1) ans+="-";
	}
	return ans;
}

int main(){
	cout <<  mumbling("MubAshIr")   << endl;
	cout <<  mumbling("maTT")    << endl;	
	cout <<  mumbling("EdaBit")   << endl;		
	return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

mumbling("MubAshIr") ? "M-Uu-Bbb-Aaaa-Sssss-Hhhhhh-Iiiiiii-Rrrrrrrr"

mumbling("maTT") ? "M-Aa-Ttt-Tttt"

mumbling("EdaBit") ? "E-Dd-Aaa-Bbbb-Iiiii-Tttttt"

Notes

*/
