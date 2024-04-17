#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//Напишите рекурсивную функцию,
//которая переводит число из десятичной системы в двоичную.
//Допускается использовать тип string для хранения двоичного числа.

string dv;
void perevod(int x) {
	dv += to_string(x % 2);
	if (x / 2 == 0) {
		reverse(dv.begin(), dv.end());
		cout << "\n" << dv;
		return;
	}
	perevod(x / 2);
	return;
}

int main()
{
	int x = 248;
	perevod(x);
}
