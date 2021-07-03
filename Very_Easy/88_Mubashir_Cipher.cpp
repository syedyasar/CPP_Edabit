/*
Source: Edabit
Link : https://edabit.com/challenge/xax2r6x2yuotq3yp5
Date: 06/30/2021

Mubashir Cipher
==================
In Mubashir Cipher, encoding is done by simply replacing paired letters from the provided key.

Create a function that takes a string containing the message to be encoded with a fixed given 2D array of letters key.

There are some variations on the rules of encipherment. One version of the cipher rules are outlined below:

key = [['m', 'c'], ['u', 'e'], ['b', 'g'], ['a', 'k'],
    ['s', 'v'], ['h', 'x'], ['i', 'z'], ['r', 'y'],
    ['p', 'w'], ['l', 'n'], ['o', 'j'], ['t', 'f'], ['q', 'd']]

message = "edabit is amazing !"

mubashirCipher(message) ? "uqkgzf zv kckizlb !"
Step 1: Search letter in the given key and replace it with paired letter:

e = u
d = q
a = k
b = g
.
.
.
g = b
Step 2: Keep all characters (including spaces) other than letters in their original positions:

"uqkgzf zv kckizlb !"
See the below examples for a better understanding:

Examples
mubashirCipher("mubashir is not amazing") ? "cegkvxzy zv ljf kckizlb"

mubashirCipher("%$ &%") ? "%$ &%"

mubashirCipher("evgeny sh is amazing") ? "usbulr vx zv kckizlb"
Notes
N/A
*/

#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;

string mubashirCipher(string message) {
	vector<vector<char>> key= {{'m', 'c'}, {'u', 'e'}, {'b', 'g'}, {'a', 'k'}, {'s', 'v'}, {'h', 'x'}, 
	{'i', 'z'}, {'r', 'y'}, {'p', 'w'}, {'l', 'n'}, {'o', 'j'}, {'t', 'f'}, {'q', 'd'}};
	
	for(int i=0;message[i]!='\0';i++){
		for(int j=0;j<key.size();j++){
		if(message[i]==key[j][0]) message[i]=key[j][1];
		else if(message[i]==key[j][1]) message[i]=key[j][0];
			}
	}
	return message;
}

int main(){
	cout <<  mubashirCipher("mubashir is not amazing")  << endl;
	cout <<  mubashirCipher("%$ &%")   << endl;	
	cout <<  mubashirCipher("evgeny sh is amazing")   << endl;		
	return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

mubashirCipher("mubashir is not amazing") ? "cegkvxzy zv ljf kckizlb"

mubashirCipher("%$ &%") ? "%$ &%"

mubashirCipher("evgeny sh is amazing") ? "usbulr vx zv kckizlb"

Notes

*/
