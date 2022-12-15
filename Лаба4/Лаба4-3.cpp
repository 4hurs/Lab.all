#include <iostream>

using namespace std;

int main() {
	int m, n;
	cout << "Kolichestvo elementov v stolb:" << endl;
	cin >> m;
	
	cout << "Kolichestvo elementov v stroku:" << endl;
	cin >> n;
	
	int matrix[m][n];
	cout << "Napishite matrix: " << endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> matrix[i][j];
	
	int min = INT_MAX;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (matrix[i][j] < min) min = matrix[i][j];
	
	for (int j = 0; j < n; j++) {
		bool contains_min = false;
		for (int i = 0; i < m; i++)
			if (matrix[i][j] == min) {
				contains_min = true;
				break;
			}
		if (contains_min)
			for (int i = 0; i < m; i++)
				if (matrix[i][j] < 0) matrix[i][j] = 0;
	}
	cout << "Vasha new matrix: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
	return 0;
}
