/*
Source: Edabit
Link : https://edabit.com/challenge/mSBdSuP2TCskAnuwN
Date: 06/29/2021


Running Athlete ??
=====================

No description.
Guess the code from test cases.
Examples
runningAthlete(["run", "jump", "run", "jump", "run"], "_|_|_") ? "_|_|_"

runningAthlete(["run", "jump", "run", "run", "run"], "_|_|_") ? "_|_/_"

runningAthlete(["jump", "jump", "jump", "jump", "jump"],"_|_|_") ? "x|x|x"

runningAthlete(["run", "run", "run", "run", "run"], "_|_|_") ? "_/_/_"
Notes
N/A

*/


#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>
#include<vector>
using namespace std;
/*
string runningAthlete(vector<string> act, string txt) {
	string ans ="";
   for(int i=0;i<act.size(); i++){
     bool k= (act[i]=="run" && txt[i]=='_') || (act[i]=="jump" && txt[i]=='|' );
		if(k) ans+=txt[i];
	    else if(txt[i]=='|') ans+='/' ;
	    else if(txt[i]=='_') ans+='x' ;
	}
return ans;
}
*/
string runningAthlete(vector<string> act, string txt) {
  	for (int i = 0; i < txt.length(); i++) {
		if (txt[i] == '_' && act[i] == "jump") txt[i] = 'x';
		else if (txt[i] == '|' && act[i] == "run") txt[i] = '/';
      }
return txt;
}


int main(){
	cout <<  runningAthlete({"run", "jump", "run", "jump", "run"}, "_|_|_") << endl ;
	cout <<  runningAthlete({"run", "jump", "run", "run", "run"}, "_|_|_")<< endl ;
	cout <<  runningAthlete({"jump", "jump", "jump", "jump", "jump"},"_|_|_")  << endl ;
	cout <<  runningAthlete({"run", "run", "run", "run", "run"}, "_|_|_") << endl ;
	return 0;
}



/*

Online Compiler : https://replit.com/languages/cpp?v2=1

runningAthlete(["run", "jump", "run", "jump", "run"], "_|_|_") ? "_|_|_"

runningAthlete(["run", "jump", "run", "run", "run"], "_|_|_") ? "_|_/_"

runningAthlete(["jump", "jump", "jump", "jump", "jump"],"_|_|_") ? "x|x|x"

runningAthlete(["run", "run", "run", "run", "run"], "_|_|_") ? "_/_/_"

Notes
*/
