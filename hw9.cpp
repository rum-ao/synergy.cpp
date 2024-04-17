#include <iostream>
#include <fstream>

using namespace std;


int main()
{
	string spisok = "Viberi zamtku ili sozdai novuyu\n1. Zametka1\n2. Zametka2\n3. Zametka3\n4. Novaya zametka";
	cout << spisok << endl;
	int x;
	cin >> x;
	if (x == 1) {
		string y;
		ifstream fin;
		fin.open("z1.txt");
		fin >> y;
		cout << y;
	}
	else if (x == 2) {
		string y;
		ifstream fin;
		fin.open("z2.txt");
		fin >> y;
		cout << y;
	}
	else if (x == 3) {
		string y;
		ifstream fin;
		fin.open("z3.txt");
		fin >> y;
		cout << y;
	}
	else if (x == 4) {
		string y;
		cin >> y;
		ofstream fout;
		fout.open("z4.txt");
		fout << y;
	}
}