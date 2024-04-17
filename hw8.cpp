#include <iostream>

using namespace std;


int main()
{
	int x = 25;
	int* uk = &x;
	cout << &x << ' ' << uk << ' ' << *uk;
}
