/*
	一维数组：
			一维数组是组成项的结构化集合，利用单个索引至指定项的位置，即可分别访问这些项
			数组声明：
					数据类型  数组名  [整数常量表达式]；

			数组项访问：
					数组名  [索引表达式]
*/
#include<iostream>
#include<string>
using namespace std;
int main() {
	int i, j;
	int testScore[5];
	float angle[4];
	for (i = 0; i < 4; i++) {
		testScore[i] = i;
		angle[i] = i ^ 2;
	}
	cout << testScore[4] << endl;
	cout << angle[2] << endl;
	system("pause");
	return 0;
}