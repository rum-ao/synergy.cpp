#include <iostream>
using namespace std;

//Пользователь вводит 2 целых числа,
//программа должна вывесит “YES”,
//если хотя бы одно из чисел чётное,
//или “NO”, если все числа нечётные.

int main()
{
	int x, y;
	cin >> x >> y;
	if (x % 2 == 0 || y % 2 == 0) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}
