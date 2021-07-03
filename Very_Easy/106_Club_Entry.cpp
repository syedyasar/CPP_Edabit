/*
Source: Edabit
Link : https://edabit.com/challenge/PxGPwdKPbos9vMNGS
Date: 07/01/2021

Club Entry
============

A night club will give you a word. For entrance, you need to provide the right number according to the provided word.

Every given word will have a doubled letter, like "dd" in addiction. To answer the right number you need to find the doubled letter's position in the alphabets and multiply this number with 4.

Create a function that takes the argument of word and returns the right number.

Examples
clubEntry("hill") ? 48
// 'l' is 12th alphabet
// 12*4 = 48

clubEntry("apple") ? 64

clubEntry("bee") ? 20
Notes
N/A
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int clubEntry(string w) {
	char a=0;
	for(int i=0;w[i]!='\0';i++){
			if(w[i]==w[i+1]){return (w[i]-96)*4;} 
	}
  return 0;
}

int main() {
    cout << clubEntry("hill") << endl;
    cout << clubEntry("addiction") << endl;
    cout << clubEntry("lettuce") << endl;

  
    return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

clubEntry("hill") ? 48

clubEntry("apple") ? 64

clubEntry("bee") ? 20

*/
