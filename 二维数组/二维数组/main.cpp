//二维数组
/*
#include<iostream>
using namespace std;

void SomeFunc(int array[3][4]);
int main() {
	//二维数组的声明, 数据类型 数组名 [整型常量表达式] [整型常量表达式] .....;
	int array_2[3][4] = { {1, 2, 3, 4},{ 5, 6, 7, 8},{ 9, 10, 11, 12}};
	//数组访问， 数组名 [索引表达式] [索引表达式] ......;
	cout << array_2[1][2] << endl;
	//在实参中传递二维数组
	SomeFunc(array_2);
	
		处理二维数组:
					要处理二维数组中的数据，通常有四种数组访问形式：随机访问、按行访问、按列访问和遍历整个数组				
	
	//对行操作
	//对行求和
	int total = 0, i;
	for (i = 0; i < 4; i++) {
		total += array_2[1][i];
	}
	cout << "2 ROW SUM: " << total << endl;
	cout << size(array_2) << endl;
	//遍历数组
	int j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			cout << array_2[i][j] << "  ";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}
void SomeFunc(int array[3][4]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			array[i][j] += 5;
			cout << array[i][j] << "  ";
		}
		cout << "\n";
	}
}
*/
/*
	多维数组：
			1.C++对一个数组所能拥有的维度数目没有设定限制
			2.有多少个特性来描述数组项，就在数组中使用多少个维度
*/

/*
	实例：
		统计数字：平均成绩，最高成绩，最低成绩，超过平均成绩的成绩数，低于平均成绩的成绩数
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct GradeStatistics {
	int Grade_num;
	int Grade_over_num;
	int Grade_low_num;
	int hightest;
	int lowest;
	float Grade_mean;
	int Grade[20];
};
int main() {
	//定义一个结构体变量
	GradeStatistics Statistics;
	//打开文件
	ifstream infile;
	ofstream outfile;
	//string infileName;
	//string outfileName;
	//cout << "输入文件名：";
	//cin >> infileName;
	infile.open("grade.txt");
	//cout << "输出文件名：";
	//cin >> outfileName;
	//outfile.open(outfileName.c_str());
	//判断文件是否打开
	if (!infile) {
		cout << "Files open failed." << endl;
		return 1;
	}
	//读取文件内的学生成绩
	int grade;
	for (int i = 0; i < 20; i++) 
		//对计数器数组清零
		Statistics.Grade[i] = 0;
	Statistics.Grade_num = 0;
	infile >> grade;
	while (infile) {
		//int j = 0;
		Statistics.Grade[grade]++;
		Statistics.Grade_num++;
		//j++;
		infile >> grade;
	}
	//计算平均值
	int sum = 0;
	for (int x = 0; Statistics.Grade[x]; x++) {
		sum += Statistics.Grade[x];
	}
	Statistics.Grade_mean = sum / 20;

	//最高成绩
	int Grade_max=0;
	for (int y = 0; Statistics.Grade[y]; y++) {
		if (Statistics.Grade[y] > Grade_max)
			Grade_max = Statistics.Grade[y];
	}
	Statistics.hightest = Grade_max;
	
	//最低成绩
	int Grade_min = 1000;
	for (int z = 0; Statistics.Grade[z]; z++) {
		if (Statistics.Grade[z] < Grade_max)
			Grade_min = Statistics.Grade[z];
	}
	Statistics.lowest = Grade_min;

	//超过平均成绩的成绩数

	
	//输出
	cout << "grade[1]= " << Statistics.Grade[1] << "grade[10]= " << Statistics.Grade[10] << endl;
	cout << "Grade_max= " << Statistics.hightest << "Grade_min= " << Statistics.lowest << endl;

	//关闭文件
	infile.close(); 
	outfile.close();
	system("pause");
	return 0;
}