#include<iostream>
using namespace std;

int main() {
	int year;
	cout << "Enter a year:" << endl;
	cin >> year;
	if (year % 400 == 0)
		cout << "������" << endl;
	if ((year % 4 == 0)&(year % 100 != 0))
		cout << "������" << endl;
	else
		cout << "��������" << endl;
	system("pause");
	return 0;
}