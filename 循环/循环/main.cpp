/*
	while语句:
		1.计数控制的循环
		2.时间控制的循环
*/

//计数控制的循环
/*
#include<iostream>
using namespace std;
int main() {
	int loopcount = 0;
	while (loopcount <= 10) {
		cout << "hello world！" << endl;
		loopcount++;
	}
	system("pause");
	return 0;
}
 

//事件控制的循环
#include<iostream>
#include<fstream>
using namespace std;
int main() {
	//终结值控制循环
	int month, day;
	cin >> month >> day;
	while (!(month == 2 && day == 31)) {
		cout << "这个月有30天" << endl;
		cin >> month >> day;
	}

	//文件尾控制的循环
	ifstream indata;
	indata.open("test.txt");
	int value;
	indata >> value;
	while (indata) {
		cout << value << endl;
		indata >> value;
	}
	indata.close();
	

	//标志控制的循环
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

//嵌套循环
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
