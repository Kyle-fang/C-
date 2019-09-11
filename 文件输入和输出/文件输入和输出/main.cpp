/*
	程序使用文件I/O时：
		1.包含头文件<fstream>
		2.使用声明语句声明将要使用的文件流
			ifstream  infile;
			ofstream  outfile;
		3.使用open函数准备每个要读取或写入的文件
		4.在每个输入或输出语句中指明文件流的名字
*/

/*
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main() {
	//运行时输入文件名
	ifstream indata;
	string filename, inputString;
	cin >> filename;
	indata.open(filename.c_str());	//open函数需要的是一个C字符串，需要将string变量转化为C字符串
	getline(indata, inputString);
	cout << "First line of file: " << inputString << endl;

	indata.close();
	system("pause");
	return 0;
}
*/

/*
	在输入\输出语句中指定文件流
	要从文件读取数据或向文件写入数据，在输入输出语句中要做的是用合适的文件流变量代替cin和cout
*/
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main() {
	string myString = "I am a good man";
	float M = 12.56;
	int m = 10;
	ofstream outfile;
	outfile.open("test1.txt");
	outfile << fixed << myString << M << m << endl;

	ifstream infile;
	infile.open("test.txt");
	infile >> fixed >> myString >> M >> m;
	cout << "myString = " << myString << "M = " << M << "m = " << m <<endl;
	//关闭文件
	infile.close();
	outfile.close();
	system("pause");
	return 0;
}