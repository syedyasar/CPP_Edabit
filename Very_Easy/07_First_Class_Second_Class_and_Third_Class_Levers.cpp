/*
Source: Edabit
Link : https://edabit.com/challenge/qJdJ7g9akxfEiKAM6
Date: 06/19/2021


First Class, Second Class and Third Class Levers
==================================================


Levers are simple machines with a rigid beam and a fulcrum. From the picture below, you can see that there are 3-types of levers: first class, second class and third class.

In a first class lever, the fulcrum is situated in the middle with the effort and the load being positioned opposite of each other.
In a second class lever, the fulcrum is situated in the right with the effort on the left and the load in the middle.
In a third class lever, the fulcrum is situated in the left with the effort being in the middle and the load being on the right.


Given an array that contains the fulcrum "f", the effort "e", and the load "l", write a function that determines whether or not the array shows a first class lever, second class lever, or a third class lever.

Examples
determineLever(["e", "f", "l"]) ? "first class lever"

determineLever(["e", "l", "f"]) ? "second class lever"

determineLever(["f", "e", "l"]) ? "third class lever"
Notes
A pair of scissors is a first class lever, a nutcracker is a second class lever and a broom is a third class lever.

*/

#include <iostream>
#include <string>
#include<vector>
using namespace std;

string determineLever(char a[] ) {
	if(a[0]=='e' && a[1]=='f' && a[2]== 'l')
		return "first class lever";
	else if(a[0]=='e' && a[1]=='l' && a[2]== 'f')
		return "second class lever";
	else if(a[0]=='f' && a[1]=='e' && a[2]== 'l')
		return "third class lever";	
}



int main() {
	
char  a1[3] = {'e', 'f', 'l'};
cout << 	determineLever(a1) << endl; // "first class lever"

char  a2[3] = {'e', 'l', 'f'};
cout << 	determineLever(a2) << endl; // "second class lever"


char  a3[3] = {'f', 'e', 'l'};
cout << 	determineLever(a3) << endl; // "third class lever"

return 0; 
}


/*
determineLever(["e", "f", "l"]) ? "first class lever"

determineLever(["e", "l", "f"]) ? "second class lever"

determineLever(["f", "e", "l"]) ? "third class lever"
*/
