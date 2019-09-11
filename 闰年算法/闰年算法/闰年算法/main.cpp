#include<iostream>
using namespace std;

int main() {
	int year;
	cout << "Enter a year:" << endl;
	cin >> year;
	if (year % 400 == 0)
		cout << "是闰年" << endl;
	if ((year % 4 == 0)&(year % 100 != 0))
		cout << "是闰年" << endl;
	else
		cout << "不是闰年" << endl;
	system("pause");
	return 0;
}