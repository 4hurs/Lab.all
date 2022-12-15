#include "Func.hpp"
#include <cmath>
#include <climits>

namespace bleh {
	bool IsPrime(int number) {
        	int r = sqrt(number); // ����� �������� �������� ����� � ��������� ����������, ����� ��� ������ ��� �� ��������������� � ������� �����
		for (int d = 2; d <= r; d++) 
			if (number % d == 0) return false;
		return true;
	}
}
