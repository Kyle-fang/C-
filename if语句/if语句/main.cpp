#include<iostream>
#include<string>
using namespace std;
int main() {
	//If-Then-Else
	/*
	int i;
	cin >> i;
	if (i <= 5)
		cout << "С��5" << endl;
	else
		cout << "����5" << endl;
	*/

	//Ƕ��if���
	int month, year;
	cout << "year= " << endl;
	cin >> year;
	cout << "month= " << endl;
	cin >> month;
	if ((year % 4 == 0 & year % 100 != 0) | year % 400 == 0)
		if (month == 2) {
			cout << "�������29��" << endl;
			switch (month) {
			case {1, 3, 5, 7, 8, 10, 12} :
				cout << "�������31��" << endl;
			case {4, 6, 9, 11}:
				cout << "�������30��" << endl;
			}
		}
		else
			cout << "�������28��" << endl;
	system("pause");
	return 0;
}