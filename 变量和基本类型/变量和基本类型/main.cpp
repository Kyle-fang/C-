/*
	�������ͣ����Σ�������
	�������ͣ���(true),��(false)
	����������(signed)�����Ա�ʾ������������0;
	�޷���������(unsigned)��ֻ���Ա�ʾ����0����;
*/
/*
#include<iostream>
int main() {
	//short ������16λ
	short f = 1234;
	std::cout << "f=" << f << std::endl;
	//int 16λ
	int x = 123456.789;
	std::cout << "x=" << x << std::endl;
	//long 16λ
	long y = 12345678.9;
	std::cout << "y=" << y << std::endl;
	//long long 32λ
	long long a = 1234567891234567.89;
	std::cout << "a=" << a << std::endl;
	//float �����ȸ���������λ��Ч����
	float b = 13.245, c = 12.65734;
	std::cout << "b=" << b <<"\n" << "c=" << c << std::endl;
	//double ˫���ȸ�������10λ��Ч����
	double d = 1423.65423, e = 1783241.98049;
	std::cout << "d=" << d << "\n" << "e=" << e << std::endl;
	//long double ��չ���ȸ�������10λ��Ч����
	long double g = 123453212.876957;
	std::cout << "g=" << g << std::endl;
	system("pause");
	return 0;
}
*/

/*
	����ת��
*/
#include<iostream>
int main() {
	bool b = 23;	//bΪ��
	std::cout << "b=" << b << std::endl;
	int i = b;
	std::cout << "i=" << i << std::endl;
	i = 3.1415926;
	std::cout << "i=" << i << std::endl;
	double pi = 3.1415;
	std::cout << "pi=" << pi << std::endl;
	int p = pi;
	std::cout << "p=" << p << std::endl;
	unsigned char c = -1;
	std::cout << "c=" << c << std::endl;
	signed char c2 = 256;
	std::cout << "c2=" << c2 << std::endl;
	system("pause");
	return 0;
}