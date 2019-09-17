/*
	一维数组：
			一维数组是组成项的结构化集合，利用单个索引至指定项的位置，即可分别访问这些项
			数组声明：
					数据类型  数组名  [整数常量表达式]；

			数组项访问：
					数组名  [索引表达式]
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	int i, j;
	int testScore[5];
	float angle[4];
	for (i = 0; i < 5; i++) {
		testScore[i] = i;
		angle[i] = i + 2;
	}
	cout << testScore[4] << endl;
	cout << angle[2] << endl;
	system("pause");
	return 0;
}
*/

/*
	1.在声明中初始化数组
	2.数组聚合操作
			唯一可以将数组作为整体进行的操作是将其作为实参传递给函数
	注：数组名代表数组第一个元素的地址，即数组的首地址
*/
/*
#include<iostream>
#include<string>
using namespace std;
void DoSmething(int one[5]);
int main() {
	//声明中初始化数组
	int age[5] = {23, 10, 16, 37, 12};
	cout << age[2] << "\n" << age[4] << endl;
	//数组聚合操作
	DoSmething(age);
	system("pause");
	return 0;
}

void DoSmething(int one[5]) {
	int i, two[5];
	for (i = 0; i < 5; i++) {
		two[i] = one[i] + 5;
		cout << two[i] << endl;
	}
	//在函数中不能将数组作为返回值，会返回数组第一个元素的地址
	//return two;
}
*/

/*
	用输入文件的居住者数据来填充数组，然后让用户交互查询每个单元的居住者数目
*/
/*
#include<iostream>
#include<fstream>
using namespace std;
int main() {
	int occupants[10];		//occupants[i]是单元i的居住者的数目
	int totalOccupants;		//居住者总数
	int counter;		//循环控制和索引变量
	int apt;		//单元号
	int account, code;		//账号，密码
	int i = 0, flag=1, x = 0;
	char j;
	ifstream infile;		//居住者数据文件
	infile.open("Text.txt");
	totalOccupants = 0;
	for (counter = 0; counter < 10; counter++) {
		infile >> occupants[counter];
		totalOccupants += occupants[counter];
		//cout << occupants[counter]<<"  ";
	}
	while (i < 3 && flag == 1) {
		if (x >= 1) {
			cout << "是否退出？（是y 否n）:";
			cin >> j;
			if (j == 'y')
				break;
		}
		cout << "请输入账号：";
		cin >> account;
		if (account == 123) {
			cout << "请输入密码：";
			cin >> code;
			if (code == 13579) {
				cout << "请输入要查询的单元号：";
				cin >> apt;
				cout << "该单元住户有" << occupants[apt-1] << "个" << endl;
			}
			else {
				cout << "密码输入错误" << endl;
				i++;
			}
		}
		else {
			cout << "无此账号！" << endl;
			i++;
		}
		x++;
	}
	if (i == 3)
		cout << "输入错误已超过三次，系统已锁定" << endl;
	else
		cout << "您已退出！" << endl;
	system("pause");
	return 0;
}*/

//对数组使用typedef，用于为数组类型指定一个名字
/*
#include<iostream>
using namespace std;
int main() {
	int i;
	typedef int one[5];
	one a;
	for (i = 0; i < 5; i++) {
		a[i] = i + 3;
		cout << a[i] << endl;
	}
	system("pause");
	return 0;
}*/

/*
	指针表达式和数组
					不带索引方括号的数组名是该数组的基址（第一个元素的地址）
*/
/*
#include<iostream>
using namespace std;
int main() {
	int anarry[5] = {1, 2, 3, 4, 5};
	int *ptr;
	ptr = anarry;		//效果完全等同于ptr = &anarry[0]；
	cout << ptr[2] << endl;		//输出数组anarry下标为二的值
	system("pause");
	return 0;
}*/


/*
	C风格的字符串
				1.作为数组的字符串
				2.C字符串操作
				3.将C字符串转换为C++字符串
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	char array[11] = "fangweijie";
	char name[] = "kyle";
	string s = "abcdef";
	cout << strlen(array) << endl;
	//将C字符串转换为C++字符串
	string Name(name);
	cout << Name << endl;
	system("pause");
	return 0;
}*/

