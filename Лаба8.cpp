#include <iostream>

using namespace std;

int main()
{
	short n;
	cout << " Enter number: " << endl;
	cin >> n;
	short* a = &n;
	char* b = (char*)a;
	cout << (short)*b << endl << (short)*(b + 1);
	return 0;
 return 0;
}

