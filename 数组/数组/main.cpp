/*
	һά���飺
			һά�����������Ľṹ�����ϣ����õ���������ָ�����λ�ã����ɷֱ������Щ��
			����������
					��������  ������  [�����������ʽ]��

			��������ʣ�
					������  [�������ʽ]
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
	1.�������г�ʼ������
	2.����ۺϲ���
			Ψһ���Խ�������Ϊ������еĲ����ǽ�����Ϊʵ�δ��ݸ�����
	ע�����������������һ��Ԫ�صĵ�ַ����������׵�ַ
*/
/*
#include<iostream>
#include<string>
using namespace std;
void DoSmething(int one[5]);
int main() {
	//�����г�ʼ������
	int age[5] = {23, 10, 16, 37, 12};
	cout << age[2] << "\n" << age[4] << endl;
	//����ۺϲ���
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
	//�ں����в��ܽ�������Ϊ����ֵ���᷵�������һ��Ԫ�صĵ�ַ
	//return two;
}
*/

/*
	�������ļ��ľ�ס��������������飬Ȼ�����û�������ѯÿ����Ԫ�ľ�ס����Ŀ
*/
/*
#include<iostream>
#include<fstream>
using namespace std;
int main() {
	int occupants[10];		//occupants[i]�ǵ�Ԫi�ľ�ס�ߵ���Ŀ
	int totalOccupants;		//��ס������
	int counter;		//ѭ�����ƺ���������
	int apt;		//��Ԫ��
	int account, code;		//�˺ţ�����
	int i = 0, flag=1, x = 0;
	char j;
	ifstream infile;		//��ס�������ļ�
	infile.open("Text.txt");
	totalOccupants = 0;
	for (counter = 0; counter < 10; counter++) {
		infile >> occupants[counter];
		totalOccupants += occupants[counter];
		//cout << occupants[counter]<<"  ";
	}
	while (i < 3 && flag == 1) {
		if (x >= 1) {
			cout << "�Ƿ��˳�������y ��n��:";
			cin >> j;
			if (j == 'y')
				break;
		}
		cout << "�������˺ţ�";
		cin >> account;
		if (account == 123) {
			cout << "���������룺";
			cin >> code;
			if (code == 13579) {
				cout << "������Ҫ��ѯ�ĵ�Ԫ�ţ�";
				cin >> apt;
				cout << "�õ�Ԫס����" << occupants[apt-1] << "��" << endl;
			}
			else {
				cout << "�����������" << endl;
				i++;
			}
		}
		else {
			cout << "�޴��˺ţ�" << endl;
			i++;
		}
		x++;
	}
	if (i == 3)
		cout << "��������ѳ������Σ�ϵͳ������" << endl;
	else
		cout << "�����˳���" << endl;
	system("pause");
	return 0;
}*/

//������ʹ��typedef������Ϊ��������ָ��һ������
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
	ָ����ʽ������
					�������������ŵ��������Ǹ�����Ļ�ַ����һ��Ԫ�صĵ�ַ��
*/
/*
#include<iostream>
using namespace std;
int main() {
	int anarry[5] = {1, 2, 3, 4, 5};
	int *ptr;
	ptr = anarry;		//Ч����ȫ��ͬ��ptr = &anarry[0]��
	cout << ptr[2] << endl;		//�������anarry�±�Ϊ����ֵ
	system("pause");
	return 0;
}*/


/*
	C�����ַ���
				1.��Ϊ������ַ���
				2.C�ַ�������
				3.��C�ַ���ת��ΪC++�ַ���
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
	//��C�ַ���ת��ΪC++�ַ���
	string Name(name);
	cout << Name << endl;
	system("pause");
	return 0;
}*/

