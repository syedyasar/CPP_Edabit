/*
Source: Edabit
Link : https://edabit.com/challenge/9MjoHiQjGNSZ5Rwmd
Date: 06/30/2021

Is the Word Singular or Plural?
====================================

Create a function that takes in a word and determines whether or not it is plural. A plural word is one that ends in "s".

Examples
isPlural("changes") ? true

isPlural("change") ? false

isPlural("dudes") ? true

isPlural("magic") ? false
Notes
Don't forget to return the result.
Remember that return true (boolean) is not the same as return "true" (string).
This is an oversimplification of the English language. We are ignoring edge cases like "goose" and "geese", "fungus" and "fungi", etc.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.
*/

#include<iostream>
#include<vector>

using namespace std;

bool isPlural(string w) {
	return w[w.size()-1]=='s';
}

int main(){
	cout << isPlural("changes")    << endl;
	cout << isPlural("change")  << endl;	
	cout << isPlural("dudes")   << endl;	
	cout << isPlural("magic")   << endl;	
	return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

isPlural("changes") ? true

isPlural("change") ? false

isPlural("dudes") ? true

isPlural("magic") ? false
*/
