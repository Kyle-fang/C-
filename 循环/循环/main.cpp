/*
	while���:
		1.�������Ƶ�ѭ��
		2.ʱ����Ƶ�ѭ��
*/

//�������Ƶ�ѭ��
/*
#include<iostream>
using namespace std;
int main() {
	int loopcount = 0;
	while (loopcount <= 10) {
		cout << "hello world��" << endl;
		loopcount++;
	}
	system("pause");
	return 0;
}
 

//�¼����Ƶ�ѭ��
#include<iostream>
#include<fstream>
using namespace std;
int main() {
	//�ս�ֵ����ѭ��
	int month, day;
	cin >> month >> day;
	while (!(month == 2 && day == 31)) {
		cout << "�������30��" << endl;
		cin >> month >> day;
	}

	//�ļ�β���Ƶ�ѭ��
	ifstream indata;
	indata.open("test.txt");
	int value;
	indata >> value;
	while (indata) {
		cout << value << endl;
		indata >> value;
	}
	indata.close();
	

	//��־���Ƶ�ѭ��
	int sum = 0, i = 1;
	bool flag = true;
	while (flag) {
		sum += i;
		if (sum >= 100)
			flag = false;
		i++;
	}
	cout << "sum = " << sum << endl;
	system("pause");
	return 0;
}
*/

//Ƕ��ѭ��
#include<iostream>
#include<fstream>
using namespace std;
int main() {
	int i = 1, j = 1, sum = 0;
	while (i <= 9) {
		while (j <= 9) {
			sum = i * j;
			cout << i << "x" << j << "=" << sum << "   ";
			j++;
		}
		i++;
		j = i;
		cout << "\n";
	}
	system("pause");
	return 0;
}
