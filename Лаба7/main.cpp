#include <iostream>
#include <cmath>
#include <climits>
#include "Func.hpp"

using namespace std;

int main() {
	int n;
	cout << "Number of rows and columns: "; 
	cin >> n;
	
	int matrix[n][n];
	cout << "Enter the matrice's elements:" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> matrix[i][j];
	
	int max = INT_MIN;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (matrix[i][j] > max) 
				if (bleh::IsPrime(matrix[i][j])) max = matrix[i][j];
					
	bool same_rows_exist = false;
	for (int i = 0; i < n; i++) // здесь i - это номер вышестоящей строки
	{
		for (int j = i + 1; j < n; j++) // здесь j - это номер нижестоящей строки
		{
			bool rows_are_equal = true;
			for (int k = 0; k < n; k++) // k - это номер элемента в пределах строки
				if (matrix[i][k] != matrix[j][k]) {
					rows_are_equal = false;
					break; 
				}
			if (rows_are_equal) {
				same_rows_exist = true;
				break;
			}
		}
	}
	
	if (same_rows_exist)
		for (int j = 0; j < n; j++) {
			int min = matrix[0][j];
			for (int i = 1; i < n; i++) {
				if (matrix[i][j] < min) {
					min = matrix[i][j];
				}
			}
			for (int i = 0; i < n; i++) {
				if (matrix[i][j] == min) {
					matrix[i][j] = max;
				}
			}
		}
	
	if (same_rows_exist) cout << "Same rows exist"; else cout << "All rows are different";
	cout << endl;
	
	cout << "Your new matrix:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) cout << matrix[i][j] << " ";
		cout << endl;
	}
	
	return 0;
}

