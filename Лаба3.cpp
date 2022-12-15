#include <iostream>

using namespace std;

int main()
{
    int N, s, x = 1, min, k;
    cin >> N;
    for (int i = 0; i < N; i++) {
    	cin >> s;
    	if (s >= -2 && s <= 20) {
    		x *= s;
    		if (min > s) {
    			k = i;
    			min = s;
			}
		}
	}
	cout << "mp: " << x << '\n' << "min: " << min << '\n' << "index: " << k + 1 << endl;
    return 0;
}
