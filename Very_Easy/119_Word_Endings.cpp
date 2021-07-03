/*
Source: Edabit
Link : https://edabit.com/challenge/xkzcKSWTadZejL7rC
Date: 07/01/2021

Word Endings
===============

Create a function that adds a string ending to each member in an array.

Examples
addEnding(["clever", "meek", "hurried", "nice"], "ly")
? ["cleverly", "meekly", "hurriedly", "nicely"]

addEnding(["new", "pander", "scoop"], "er")
? ["newer", "panderer", "scooper"]

addEnding(["bend", "sharpen", "mean"], "ing")
? ["bending", "sharpening", "meaning"]
Notes
Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.
*/

#include<iostream>
#include<vector>
#include<cmath>


#include <vector>
using namespace std;
vector<string> addEnding(vector<string> a, string e) {
	for(int i=0;i<a.size();i++){	a[i]+=e;	}
	return a;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1

addEnding(["clever", "meek", "hurried", "nice"], "ly")
? ["cleverly", "meekly", "hurriedly", "nicely"]

addEnding(["new", "pander", "scoop"], "er")
? ["newer", "panderer", "scooper"]

addEnding(["bend", "sharpen", "mean"], "ing")
? ["bending", "sharpening", "meaning"]

*/
