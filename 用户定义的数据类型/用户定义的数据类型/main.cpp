/*
	Typedef语句：
				Tyoedef语句允许为现有类型引入一个新名字
				typedef [现有类型名] [新类型名]
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
	枚举类型：用户列举一些直接只来定义一种新的简单类型，这些直接值构成了该类型的域（这些直接值必须是标识符）
*/

/*
#include<iostream>
using namespace std;
enum Animals { RODENT, CAT, DOG, BIRO, REPTILE, HORSE, BOVINE, SHEEP };
int main() {
	Animals inPatient;  //inPatient是Animals类型的一个变量
	Animals outPatient;
	inPatient = DOG;	//DOG是Animals类型的直接值,编译器禁止直接赋值如：inPatient = 2
	cout << inPatient << endl;
	//可将枚举类型隐式转化为整数类型，但不允许将整数类型隐式转化为枚举类型
	int someInt = DOG;
	cout << someInt << endl;
	//递增
	inPatient = static_cast<Animals>(inPatient + 1);
	cout << inPatient << endl;
	//比较
	bool bool1 = inPatient <= BIRO;
	cout << bool1 << endl;
	system("pause");
	return 0;
}
*/

/*
	记录（Struct）
				记录是一种异构结构化数据类型（异构：一条记录的各个组成部分可以是不同的数据类型）
				一条记录的每个组成部分称为该记录的字段，，每个字段有一个名字，称为字段名
				Struct声明：
							struct 类型名
							{
								数据类型 成员名;
								数据类型 成员名;
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
	利用变量列表还可以声明该类型的变量
	Strcuct声明：
				struct 类型名
				{
					数据类型 成员名；
							.
							.
							.
				}变量列表;
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
	//对Struct的聚合操作，是指将Struct作为整体单元进行处理的操作
	// 1.可将一个Struct变量指定给另一个变量，这两个变量声明必须为相同类型
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
	分层记录：
			若一个记录的组成项本身就是记录，则称该记录为分层记录
*/

//跟踪商店每天的营业额、
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
		  1.声明union类型的语法与声明struct类型的语法相同
		  2.在程序执行期间，其一次只能容纳一个成员，即几个成员共用同一个内存空间，每次只保存一个成员
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

	指针变量：
			容纳其他变量的地址的变量
			指针变量声明：
						1.DataType* 变量；  DataType* 变量， *变量...；
						2.编译器不关心星号的位置
						3.如果在一个语句中声明几个变量，那就必须在每个变量名之前都添加一个星号，
					否则，只有第一个变量被识别为指针变量
						4.&运算符称为取址运算符
						5.使用一元*运算符：取消引用或间接引用
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	int beta;
	int *inptr;
	//将指针inptr指向beta
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
	引用类型：
			有无界值的集合组成，每个都是一个给定类型的变量的地址
			声明语法：
					DataType&  Variable；
					DataType  &Variable ,&Variable;
*/



