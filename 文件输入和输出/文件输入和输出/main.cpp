/*
	����ʹ���ļ�I/Oʱ��
		1.����ͷ�ļ�<fstream>
		2.ʹ���������������Ҫʹ�õ��ļ���
			ifstream  infile;
			ofstream  outfile;
		3.ʹ��open����׼��ÿ��Ҫ��ȡ��д����ļ�
		4.��ÿ���������������ָ���ļ���������
*/

/*
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main() {
	//����ʱ�����ļ���
	ifstream indata;
	string filename, inputString;
	cin >> filename;
	indata.open(filename.c_str());	//open������Ҫ����һ��C�ַ�������Ҫ��string����ת��ΪC�ַ���
	getline(indata, inputString);
	cout << "First line of file: " << inputString << endl;

	indata.close();
	system("pause");
	return 0;
}
*/

/*
	������\��������ָ���ļ���
	Ҫ���ļ���ȡ���ݻ����ļ�д�����ݣ���������������Ҫ�������ú��ʵ��ļ�����������cin��cout
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
	//�ر��ļ�
	infile.close();
	outfile.close();
	system("pause");
	return 0;
}