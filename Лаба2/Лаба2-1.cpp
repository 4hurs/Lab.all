#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    setlocale(LC_ALL, "Rus");
    cout << "¬ведите A" << endl;
    cin >> a;
    cout << "¬ведите B" << endl;
    cin >> b;
    cout << "¬ведите C" << endl;
    cin >> c;
    if (a > b && b > c)
    {
        cout << a - b - c << endl;
    }
    else if (b > a && (b % c == 0))
    {
        cout << b/c + b - a << endl;
    }
    else
    {
        cout << a + b + c << endl;
    }
    return 0;
}
