/*
Source: Edabit
Link : https://edabit.com/challenge/d4ioaDguTvrG8QWh5
Date: 06/25/2021


Single Occurrence
====================

Create a function that, given a string str, finds a letter that has a single occurrence. Return the letter in uppercase.

Examples
singleOccurrence("EFFEAABbc") ? "C"

singleOccurrence("AAAAVNNNNSS") ? "V"

singleOccurrence("S") ? "S"
Notes
The function will not be case sensitive.
*/


#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>
using namespace std;
char singleOccurrence(string s) {
	int k;
	for(int i=0;s[i]!='\0'; i++){
		k=0;
		char t=toupper(s[i]);
	  for(int j=0;s[j]!='\0';j++){	if(toupper(s[j])==t) k++;	}	
		if(k==1) return toupper(t);
	}
}

int main(){
	cout <<  singleOccurrence("EFFEAABbc")    << endl ;
	cout <<  singleOccurrence("AAAAVNNNNSS") << endl ;
	cout <<  singleOccurrence("S")  << endl ;
	return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

singleOccurrence("EFFEAABbc") ? "C"

singleOccurrence("AAAAVNNNNSS") ? "V"

singleOccurrence("S") ? "S"
Notes
*/
