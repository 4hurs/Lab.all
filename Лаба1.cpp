#include <iostream>

using namespace std;

int main()
{
    short a, b;
    setlocale(LC_ALL, "Rus");
    cout << "Введите длину прямоугольника" << endl;
    cin >> a;
    cout << "Введите ширину прямоугольника" << endl;
    cin >> b;
    if (a < 20 && b < 20 && a > 0 && b > 0)
    {
        cout << "Периметр равен: " << endl;
        cout << 2 * (a + b) << endl;

    }
    else
    {
        cout << "Попробуйте ещё раз" << endl;
    }
    return 0;
}
