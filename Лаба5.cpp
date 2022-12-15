#include <iostream>
#include <string>
using namespace std;


int main() {
	
	string str;
	cout << "Please, enter the line in english now. " << endl;
	cin >> str;
	cout << "Your line: " << str << endl;
	for (int i = 0; i < str.length(); i++) 
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y') {
			str.erase(i, 1);
			i--;
		}
			
	cout << " New line: " << str;
	return 0;
}

