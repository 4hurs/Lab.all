#include <iostream>

using namespace std;

int main()
{
    short a, b;
    setlocale(LC_ALL, "Rus");
    cout << "������� ����� ��������������" << endl;
    cin >> a;
    cout << "������� ������ ��������������" << endl;
    cin >> b;
    if (a < 20 && b < 20 && a > 0 && b > 0)
    {
        cout << "�������� �����: " << endl;
        cout << 2 * (a + b) << endl;

    }
    else
    {
        cout << "���������� ��� ���" << endl;
    }
    return 0;
}
