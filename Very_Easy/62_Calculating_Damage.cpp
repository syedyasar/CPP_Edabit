/*
Source: Edabit
Link : https://edabit.com/challenge/Sccdm4SMZhctjyoYi
Date: 06/29/2021


Calculating Damage
====================

Create a function that takes damage and speed (attacks per second) and returns the amount of damage after a given time.

Examples
damage(40, 5, "second") ? 200

damage(100, 1, "minute") ? 6000

damage(2, 100, "hour") ? 720000
Notes
Return 0 if damage or speed is negative.
*/


#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>

using namespace std;
unsigned int damage(int damage, int speed, string time) {
	int t= damage*speed;
	 if(damage<=0 || speed<=0 ) return 0;
   else if(time=="second") return t;
   else if(time=="minute") return t*60;
   else if(time=="hour") return t*3600;
}


int main(){
	cout <<  damage(40, 5, "second") << endl ;
	cout <<  damage(100, 1, "minute") << endl ;
	cout <<  damage(2, 100, "hour") << endl ;
	return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

damage(40, 5, "second") ? 200

damage(100, 1, "minute") ? 6000

damage(2, 100, "hour") ? 720000

Notes
*/
