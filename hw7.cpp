#include <iostream>
#include <fstream>

using namespace std;


int main()
{
	string x;
	ifstream fin;
	fin.open("C:\\Users\\a.rumyantsev\\YandexDisk\\learning\\c++\\homework\\hw6\\text.txt");
	fin >> x;
	cout << x;
}
