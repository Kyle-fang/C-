//��ά����
/*
#include<iostream>
using namespace std;

void SomeFunc(int array[3][4]);
int main() {
	//��ά���������, �������� ������ [���ͳ������ʽ] [���ͳ������ʽ] .....;
	int array_2[3][4] = { {1, 2, 3, 4},{ 5, 6, 7, 8},{ 9, 10, 11, 12}};
	//������ʣ� ������ [�������ʽ] [�������ʽ] ......;
	cout << array_2[1][2] << endl;
	//��ʵ���д��ݶ�ά����
	SomeFunc(array_2);
	
		�����ά����:
					Ҫ�����ά�����е����ݣ�ͨ�����������������ʽ��������ʡ����з��ʡ����з��ʺͱ�����������				
	
	//���в���
	//�������
	int total = 0, i;
	for (i = 0; i < 4; i++) {
		total += array_2[1][i];
	}
	cout << "2 ROW SUM: " << total << endl;
	cout << size(array_2) << endl;
	//��������
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
	��ά���飺
			1.C++��һ����������ӵ�е�ά����Ŀû���趨����
			2.�ж��ٸ��������������������������ʹ�ö��ٸ�ά��
*/

/*
	ʵ����
		ͳ�����֣�ƽ���ɼ�����߳ɼ�����ͳɼ�������ƽ���ɼ��ĳɼ���������ƽ���ɼ��ĳɼ���
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
	//����һ���ṹ�����
	GradeStatistics Statistics;
	//���ļ�
	ifstream infile;
	ofstream outfile;
	//string infileName;
	//string outfileName;
	//cout << "�����ļ�����";
	//cin >> infileName;
	infile.open("grade.txt");
	//cout << "����ļ�����";
	//cin >> outfileName;
	//outfile.open(outfileName.c_str());
	//�ж��ļ��Ƿ��
	if (!infile) {
		cout << "Files open failed." << endl;
		return 1;
	}
	//��ȡ�ļ��ڵ�ѧ���ɼ�
	int grade;
	for (int i = 0; i < 20; i++) 
		//�Լ�������������
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
	//����ƽ��ֵ
	int sum = 0;
	for (int x = 0; Statistics.Grade[x]; x++) {
		sum += Statistics.Grade[x];
	}
	Statistics.Grade_mean = sum / 20;

	//��߳ɼ�
	int Grade_max=0;
	for (int y = 0; Statistics.Grade[y]; y++) {
		if (Statistics.Grade[y] > Grade_max)
			Grade_max = Statistics.Grade[y];
	}
	Statistics.hightest = Grade_max;
	
	//��ͳɼ�
	int Grade_min = 1000;
	for (int z = 0; Statistics.Grade[z]; z++) {
		if (Statistics.Grade[z] < Grade_max)
			Grade_min = Statistics.Grade[z];
	}
	Statistics.lowest = Grade_min;

	//����ƽ���ɼ��ĳɼ���

	
	//���
	cout << "grade[1]= " << Statistics.Grade[1] << "grade[10]= " << Statistics.Grade[10] << endl;
	cout << "Grade_max= " << Statistics.hightest << "Grade_min= " << Statistics.lowest << endl;

	//�ر��ļ�
	infile.close(); 
	outfile.close();
	system("pause");
	return 0;
}