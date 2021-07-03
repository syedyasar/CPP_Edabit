/*
Source: Edabit
Link : https://edabit.com/challenge/sMP2GFYKT23oDMRxW
Date: 06/30/2021

The Bottom of the Matrix
===========================

This challenge concerns square matrices (same number of rows and columns) as the below example illustrates:

[
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9]
]
The entries in the diagonal line from the top left to the bottom right form the main diagonal of the matrix. In this case, 1,5,9 form the main diagonal.

Write a function that returns the matrix obtained by replacing the entries above the main diagonal with 0s.

For example, for the matrix above you should return:

[
  [1, 0, 0],
  [4, 5, 0],
  [7, 8, 9]
]
Examples
lowerTriang([
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9]
]) ? [
  [1, 0, 0],
  [4, 5, 0],
  [7, 8, 9]
]

lowerTriang([
  [5, 7],
  [7, 9]
]) ? [
  [5, 0],
  [7, 9]
]

lowerTriang([
  [1, 8, 8, 1],
  [2, 7, 7, 2],
  [3, 6, 6, 3],
  [4, 5, 5, 4]
]) ? [
  [1, 0, 0, 0],
  [2, 7, 0, 0],
  [3, 6, 6, 0],
  [4, 5, 5, 4]
]
Notes
As in the examples, the size of the matrices will vary (but they will always be square).
In Linear Algebra, matrices with 0s above the diagonal are called lower triangular matrices.
*/

#include<iostream>
#include<vector>

using namespace std;
vector<vector<int>> lowerTriang(vector<vector<int>> m) {
	for(int i=0;i<m.size();i++)
		for(int j=i+1;j<m[i].size();j++){
			m[i][j]=0;
		}	
	return m;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1



*/
