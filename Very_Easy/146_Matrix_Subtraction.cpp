/*
Source: Edabit
Link : https://edabit.com/challenge/6RbMYxJeqNkpubgKp
Date: 07/02/2021

Matrix Subtraction
====================

Two matrices must have an equal number of rows and columns to be subtracted. In which case, the subtracted of two matrices A and B will be a matrix which has the same number of rows and columns as A and B.

The result of the subtraction of A and B, denoted A - B is computed by subtracting corresponding elements of A and B.

Create a function that takes 2 x 2D array (matrix A, matrixB) as an argument and returns a 2D array (matrix C). C = A-B.

Examples
sub([
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9]
], [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9]
]) ? [
  [0, 0, 0],
  [0, 0, 0],
  [0, 0, 0]
]
Notes
Treat strings of numbers as integers.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<vector<int>> sub(vector<vector<int>> A, vector<vector<int>> B) {
	vector<vector<int>> C;
	for(int i=0;i<A.size();i++){
		for(int j=0;j<A[0].size();j++){
			C[i][j]=A[i][j] - B[i][j];
		}
	}
	return C;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
