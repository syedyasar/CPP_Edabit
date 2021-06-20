/*
Source: Edabit
Link : https://edabit.com/challenge/fZBR6hjwAZhspyTx3
Date: 06/19/2021

Luke, I Am Your ...
======================

Luke Skywalker has family and friends. Help him remind them who is who. Given a string with a name, return the relation of that person to Luke.

Person	Relation
Darth Vader	father
Leia	sister
Han	brother in law
R2D2	droid
Examples
relationToLuke("Darth Vader") ? "Luke, I am your father."

relationToLuke("Leia") ? "Luke, I am your sister."

relationToLuke("Han") ? "Luke, I am your brother in law."
Notes
N/A
*/

#include <iostream>
#include <string>
//#include<vector>
//#include <algorithm>
using namespace std;
string relationToLuke(string name) {
	string relation;
	if(name=="Darth Vader") relation = "father.";
	else if(name=="Leia") relation = "sister.";	
	else if(name=="Han") relation = "brother in law.";	
	else if(name=="R2D2") relation = "droid.";	

	return "Luke, I am your " +  relation;
}

int main(){
	cout <<relationToLuke("Darth Vader")  << endl;
	cout << relationToLuke("Leia")  << endl;
	cout << relationToLuke("Han")  << endl;
}

/*
relationToLuke("Darth Vader") ? "Luke, I am your father."

relationToLuke("Leia") ? "Luke, I am your sister."

relationToLuke("Han") ? "Luke, I am your brother in law."

*/
