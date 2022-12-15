#include <iostream>
using namespace std;

int getFirstDigit(int number);
int getMaxDigit (int number);

int main() {
	int n, swap;
	cout << "Kolicestvo elementov: ";
	cin >> n;
	int *array = new int [n];
	cout << "Sami elementi: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < n - 1; i++) {  //индекс например х
		for (int j = i + 1; j < n; j++) {   //индекс  х + 1 
			if (getFirstDigit(array[i]) > getFirstDigit(array[j])) {  // сравниваем первые цифры соседей
				swap = array[i];
				array[i] = array[j];
				array[j] = swap;
			}else if (getFirstDigit(array[i]) == getFirstDigit(array[j])) {  //смотрим наибольшие если равны 
				if(getMaxDigit(array[i]) > getMaxDigit(array[j])) {
					swap = array[i];
					array[i] = array[j];
					array[j] = swap;
				}else if(getMaxDigit(array[i]) == getMaxDigit(array[j])) {  //если равны и макс цифры то сорт по возрастанию
					if(array[i] > array[j]) {
						swap = array[i];
						array[i] = array[j];
						array[j] = swap;
					}
				}
			}
		}
		
	}
	cout << endl << "Otsortirovaniy array: " << endl;
	for(int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
	delete [] array;
	return 0;	
};
int getFirstDigit(int number) {
	int firstNumber;
	while(number > 0) {
		firstNumber = number % 10;
		number /= 10;
	}
	return firstNumber;
};
int getMaxDigit(int number) {
	int maxDigit, digit = 0;
	maxDigit = number % 10;
	while(number > 0) {
		digit = number % 10;
		if(maxDigit < digit) {
			maxDigit = digit;
		}
		number /= 10;
	}
	return maxDigit;
}
