/*
	Typedef��䣺
				Tyoedef�������Ϊ������������һ��������
				typedef [����������] [��������]
*/
/*
#include<iostream>
using namespace std;
int main() {
	typedef int Boolean;
	const int True = 1;
	const int False = 0;
	Boolean a = True;
	cout << a << endl;
	system("pause");
	return 0;
}
*/

/*
	ö�����ͣ��û��о�һЩֱ��ֻ������һ���µļ����ͣ���Щֱ��ֵ�����˸����͵�����Щֱ��ֵ�����Ǳ�ʶ����
*/

/*
#include<iostream>
using namespace std;
enum Animals { RODENT, CAT, DOG, BIRO, REPTILE, HORSE, BOVINE, SHEEP };
int main() {
	Animals inPatient;  //inPatient��Animals���͵�һ������
	Animals outPatient;
	inPatient = DOG;	//DOG��Animals���͵�ֱ��ֵ,��������ֱֹ�Ӹ�ֵ�磺inPatient = 2
	cout << inPatient << endl;
	//�ɽ�ö��������ʽת��Ϊ�������ͣ�������������������ʽת��Ϊö������
	int someInt = DOG;
	cout << someInt << endl;
	//����
	inPatient = static_cast<Animals>(inPatient + 1);
	cout << inPatient << endl;
	//�Ƚ�
	bool bool1 = inPatient <= BIRO;
	cout << bool1 << endl;
	system("pause");
	return 0;
}
*/

/*
	��¼��Struct��
				��¼��һ���칹�ṹ���������ͣ��칹��һ����¼�ĸ�����ɲ��ֿ����ǲ�ͬ���������ͣ�
				һ����¼��ÿ����ɲ��ֳ�Ϊ�ü�¼���ֶΣ���ÿ���ֶ���һ�����֣���Ϊ�ֶ���
				Struct������
							struct ������
							{
								�������� ��Ա��;
								�������� ��Ա��;
										.
										.
										.
										};
*/
/*
#include<iostream>
#include<string>
using namespace std;
struct students
{
	string name;
	int age;
	long long number;
	float grade;
};
*/
/*
	���ñ����б��������������͵ı���
	Strcuct������
				struct ������
				{
					�������� ��Ա����
							.
							.
							.
				}�����б�;
*/
/*
struct worker
{
	string name;
	int age;
	string position;
	float salary;
}Tim,Jim;
int main() {
	students kyle;
	cin >> kyle.name;
	cin >> kyle.age;
	cin >> kyle.number;
	cin >> kyle.grade;
	cout << "name = " << kyle.name << "age = " << kyle.age << "number = " 
		<< kyle.number << "grade = " << kyle.grade << endl;
	//��Struct�ľۺϲ�������ָ��Struct��Ϊ���嵥Ԫ���д���Ĳ���
	// 1.�ɽ�һ��Struct����ָ������һ��������������������������Ϊ��ͬ����
	students tom;
	tom = kyle;
	cout << tom.name << endl;
	Tim.name = "tim";
	Tim.salary = 30000;
	Jim.age = 32;
	Jim.position = "programer";
	cout << "Tim's name is " << Tim.name << "\n" << "Jim's age is " << Jim.age << endl;
	system("pause");
	return 0;
}
*/

/*
	�ֲ��¼��
			��һ����¼����������Ǽ�¼����Ƹü�¼Ϊ�ֲ��¼
*/

//�����̵�ÿ���Ӫҵ�
/*
#include<iostream>
#include<string>
using namespace std;
struct date
{
	int year;
	int month;
	int day;
};

struct shop
{
	float Turnover;
	int Staff;
	string Rotary_store_manager;
	date time;
}shop_1;
int main() {
	cout << "year = ";
	cin >> shop_1.time.year;
	cout << "month = ";
	cin >> shop_1.time.month;
	cout << "day = ";
	cin >> shop_1.time.day;
	cout << "Turnover = ";
	cin >> shop_1.Turnover;
	cout << "Staff = ";
	cin >> shop_1.Staff;
	cout << "Rotary_store_manager = ";
	cin >> shop_1.Rotary_store_manager;

	system("pause");
	return 0;
}
*/

/*
	union:
		  1.����union���͵��﷨������struct���͵��﷨��ͬ
		  2.�ڳ���ִ���ڼ䣬��һ��ֻ������һ����Ա����������Ա����ͬһ���ڴ�ռ䣬ÿ��ֻ����һ����Ա
*/
/*
union timeType
{
	long second;
	int minute;
	float hour;
}time;
#include<iostream>
using namespace std;
int main() {
	time.hour = 2.1;
	time.minute = 126;
	cout << "hour = " << time.hour << "minute = " << time.minute << endl;
	system("pause");
	return 0;
}
*/

/*

	ָ�������
			�������������ĵ�ַ�ı���
			ָ�����������
						1.DataType* ������  DataType* ������ *����...��
						2.�������������Ǻŵ�λ��
						3.�����һ����������������������Ǿͱ�����ÿ��������֮ǰ�����һ���Ǻţ�
					����ֻ�е�һ��������ʶ��Ϊָ�����
						4.&�������Ϊȡַ�����
						5.ʹ��һԪ*�������ȡ�����û�������
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	int beta;
	int *inptr;
	//��ָ��inptrָ��beta
	inptr = &beta;
	beta = 1;
	cout << inptr << endl;
	*inptr = 28;
	cout << beta << endl;
	cout << inptr << endl;
	system("pause");
	return 0;
}
*/

/*
	�������ͣ�
			���޽�ֵ�ļ�����ɣ�ÿ������һ���������͵ı����ĵ�ַ
			�����﷨��
					DataType&  Variable��
					DataType  &Variable ,&Variable;
*/



