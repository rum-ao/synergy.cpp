#include <iostream>
using namespace std;

//Пользователь вводит 2 целых числа,
//которые задают диапазон.
//Через пробел вывести в консоль все нечётные числа из этого диапазона.

int main()
{
	int x, y;
	cin >> x >> y;

	for (int i = x; i <= y; i++) {
		if (i % 2 != 0) cout << i << ' ';
	}
}