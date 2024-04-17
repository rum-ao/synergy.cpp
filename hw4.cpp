#include <iostream>
using namespace std;

//Пользователь вводит N и M –количество строк и столбцов в матрице.
//Программа должна заполнить матрицу случайными двузначными числами и корректно вывести полученную матрицу в консоль.
//После этого пользователь вводит номер строки или столбца,
//а программа выводит сумму числе в соответствующей строке или соответствующем столбце.

int main()
{
	srand(time(0));
	int n, m, a[100][100];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int start = 10;
			int end = 99;
			int x = rand() % (end - start + 1) + start;
			a[i][j] = x; 
			cout << a[i][j] << ' ';
		}
		cout << endl;
	} 

	int numb_s; int sum;
	sum = 0;
	cin >> numb_s;
	for (int i = 0; i < n; i++) {
		sum += a[i][numb_s];
	} 
	cout << sum;
}



