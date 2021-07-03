/*
Source: Edabit
Link :  https://edabit.com/challenge/kkuLWh3ELxZTmL5FP
Date: 07/01/2021

Hamming Distance
==================

Hamming distance is the number of characters that differ between two strings.

To illustrate:

String1: "abcbba"
String2: "abcbda"

Hamming Distance: 1 - "b" vs. "d" is the only difference.
Create a function that computes the hamming distance between two strings.

Examples
hammingDistance("abcde", "bcdef") ? 5

hammingDistance("abcde", "abcde") ? 0

hammingDistance("strong", "strung") ? 1
Notes
Both strings will have the same length.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
using namespace std;
int hammingDistance(string str1,string str2) {
	int d=0;
	for(int i=0;str1[i]!='\0';i++){
		if(str1[i]!=str2[i]) d++;
	}
	return d;
}

int main() {
	cout << hammingDistance("abcde", "bcdef")  << endl;
	cout << hammingDistance("abcde", "abcde")   << endl;
	cout << hammingDistance("strong", "strung")  << endl;	
    return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

hammingDistance("abcde", "bcdef") ? 5

hammingDistance("abcde", "abcde") ? 0

hammingDistance("strong", "strung") ? 1

*/
