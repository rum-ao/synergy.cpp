#include <iostream>
using namespace std;

//Напишите программу, которая поочерёдно запрашивает у пользователя переменные различных типов,
//после чего выводит их все через пробел обратно в консоль.
//Обязательно использовать такие типы данных как int, double, char, bool, string.
//То есть, например, программа просит пользователя “Enter int: “, затем “Enter double : “ и так далее,
//а в конце выводит “You entered : 5 3.14 random_string “ и так далее.

int main()
{
	int i; double d; char c; bool b; string s;
	cout << "Enter Integer:\n";
	cin >> i;

	cout << "Enter Double:\n";
	cin >> d;

	cout << "Enter Char:\n";
	cin >> c;

	cout << "Enter Bool:\n";
	cin >> b;

	cout << "Enter String:\n";
	cin >> s;

	cout << i << ' ' << d << ' ' << c << ' ' << b << ' ' << s;
}