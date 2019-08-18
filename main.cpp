/*
	算数类型：整形，浮点型
	布尔类型：真(true),假(false)
	带符号类型(signed)：可以表示正数，负数，0;
	无符号数类型(unsigned)：只可以表示大于0的数;
*/
/*
#include<iostream>
int main() {
	//short 短整型16位
	short f = 1234;
	std::cout << "f=" << f << std::endl;
	//int 16位
	int x = 123456.789;
	std::cout << "x=" << x << std::endl;
	//long 16位
	long y = 12345678.9;
	std::cout << "y=" << y << std::endl;
	//long long 32位
	long long a = 1234567891234567.89;
	std::cout << "a=" << a << std::endl;
	//float 单精度浮点数，六位有效数字
	float b = 13.245, c = 12.65734;
	std::cout << "b=" << b <<"\n" << "c=" << c << std::endl;
	//double 双精度浮点数，10位有效数字
	double d = 1423.65423, e = 1783241.98049;
	std::cout << "d=" << d << "\n" << "e=" << e << std::endl;
	//long double 扩展精度浮点数，10位有效数字
	long double g = 123453212.876957;
	std::cout << "g=" << g << std::endl;
	system("pause");
	return 0;
}
*/

/*
	类型转换
*/
#include<iostream>
int main() {
	bool b = 23;	//b为真
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