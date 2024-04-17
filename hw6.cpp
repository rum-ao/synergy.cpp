#include <iostream>
#include <fstream>

using namespace std;


int main()
{
	string x;
	cin >> x;
	ofstream fout("text.txt");
	fout << x;
	fout.close();
}
