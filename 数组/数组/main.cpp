/*
	һά���飺
			һά�����������Ľṹ�����ϣ����õ���������ָ�����λ�ã����ɷֱ������Щ��
			����������
					��������  ������  [�����������ʽ]��

			��������ʣ�
					������  [�������ʽ]
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