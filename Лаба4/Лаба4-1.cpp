#include <iostream>
using namespace std;


int main() {
	int n;
	bool flag = false;
	const int SUM = 14;
	cout << "Kolicestvo elementov: ";
	while (n > 10000) {
		cin >> n;
	}
	int *array = new int [n];
	cout << "Sami elementi: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> array[i];
		if (flag == false && ((array[i] % 10) + (array[i]/10%10) + (array[i]/100%10) + (array[i]/1000%10) == SUM)) {
			flag = true;
		}
	}
	if (flag == true) {
		int swap;
		cout << "Otsortirovanaya posledovatelnost: " << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - 1; j++) {
				if (array[j] > array[j + 1]) {
					swap = array[j];
					array[j] = array[j + 1];
					array[j + 1] = swap;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
	delete [] array;
	return 0;
}
