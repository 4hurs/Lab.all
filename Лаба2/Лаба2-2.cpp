#include <iostream>

using namespace std;

int main()
{
    int n;
    setlocale(LC_ALL, "Rus");
    cout << "������� ����� �����" << endl;
    cin >> n;
    switch (n)
	{
	case 0: cout << "����";
		break;
	case 1: cout << "����";
		break;
	case 2: cout << "���";
		break;
	case 3: cout << "���";
		break;
	case 4: cout << "������";
		break;
	case 5: cout << "����";
		break;
	case 6: cout << "�����";
		break;
	case 7: cout << "����";
		break;
	case 8: cout << "������";
		break;
	case 9: cout << "������";
		break;
	default: cout << "�����, � �� �����.";
	}
	return 0;
}
