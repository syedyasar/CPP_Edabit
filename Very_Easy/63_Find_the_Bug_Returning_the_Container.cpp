/*
Source: Edabit
Link : https://edabit.com/challenge/5XppQpBfjCYCuErwp
Date: 06/29/2021


Find the Bug: Returning the Container
=======================================

The packaging system is running wild! The candy is lying loose all over in the warehouse, the cereal is missing, and bread is stuffed in a bottle. What is going on here? The candy should be in plastic and the bread should be in a bag.

The packaging machine is running the get_container() function to retrieve the container of a product. But something is not right...

Examples
get_container("Bread") ? "bag"

get_container("Beer") ? "bottle"

get_container("Candy") ? "plastic"

get_container("Cheese") ? "None"
Think about what the object's packaging should be and check the syntax.

*/


#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>
/*

Given Code.
//Find the errors
std::string get_contaner(std::string product){
	std::vector<std::string> prod = {"Bread", "Milk", "Beer", "Eggs", "Cerials", "Candy", "Cheese"};
	std::vector<std::string> cot = {"bottle", "bottle", "bottle", "carton", "box", "None", "None"};
	for(int i = 0; i < prod.size(); i++){
		if(prod[i] == product)
			return cont[i];
	}
}

*/
//Corrected Code
using namespace std;
string get_container(string product){
	vector<string> prod = {"Bread", "Milk", "Beer", "Eggs", "Cerials", "Candy", "Cheese"};
	vector<string> cot = {"bag", "bottle", "bottle", "carton", "box", "plastic", "None"};
	for(int i = 0; i < prod.size(); i++){
		if(prod[i] == product)
			return cot[i];
	}
	return "None" ;
}

int main(){
	cout << get_container("Bread") << endl ;
	cout <<  get_container("Beer") << endl ;
	cout << get_container("Candy") << endl ;
	cout << get_container("Cheese")  << endl ;
	return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

get_container("Bread") ? "bag"

get_container("Beer") ? "bottle"

get_container("Candy") ? "plastic"

get_container("Cheese") ? "None"

Notes
*/
