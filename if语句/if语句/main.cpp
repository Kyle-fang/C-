#include<iostream>
#include<string>
using namespace std;
int main() {
	//If-Then-Else
	/*
	int i;
	cin >> i;
	if (i <= 5)
		cout << "小于5" << endl;
	else
		cout << "大于5" << endl;
	*/

	//嵌套if语句
	int month, year;
	cout << "year= " << endl;
	cin >> year;
	cout << "month= " << endl;
	cin >> month;
	if ((year % 4 == 0 & year % 100 != 0) | year % 400 == 0)
		if (month == 2) {
			cout << "这个月有29天" << endl;
			switch (month) {
			case {1, 3, 5, 7, 8, 10, 12} :
				cout << "这个月有31天" << endl;
			case {4, 6, 9, 11}:
				cout << "这个月有30天" << endl;
			}
		}
		else
			cout << "这个月有28天" << endl;
	system("pause");
	return 0;
}