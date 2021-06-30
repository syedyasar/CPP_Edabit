/*
Source: Edabit
Link : https://edabit.com/challenge/TFfxWSCdSffmRSvZs
Date: 06/25/2021


Back to Home?
=================

Mubashir has started his journey from home. Given a string of directions (N=North, W=West, S=South, E=East), he will walk for one minute in each direction. Determine whether a set of directions will lead him back to the starting position or not.

Examples
backToHome("EEWE") ? false

backToHome("NENESSWW") ? true

backToHome("NEESSW") ? false
Notes
N/A
*/


#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>

using namespace std;
bool backToHome(string d){
	int a[2]={0,0};
for(int i=0;d[i]!='\0'; i++)
{
		if(d[i]=='E') a[0]++;
		else if(d[i]=='W') a[0]--;
		else if(d[i]=='N') a[1]++;
		else if(d[i]=='S') a[1]--;
}
	return (a[0]==0 && a[1]==0) ;
}
int main(){
	cout <<  backToHome("EEWE")    << endl ;
	cout <<  backToHome("NENESSWW")  << endl ;
	cout <<  backToHome("NEESSW")  << endl ;
	return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

backToHome("EEWE") ? false

backToHome("NENESSWW") ? true

backToHome("NEESSW") ? false
Notes
*/
