//length和size函数

/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	string firstName;
	string fullName;
	firstName = "Alexandra";
	cout << firstName.length() << endl;
	cout << firstName.size() << endl;
	fullName = firstName + "kyle";
	cout << fullName.length() << endl;
	cout << fullName.size() << endl;
	system("pause");
	return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	//find函数
	string str = "I am a goood men";
	cout << str.find("a") << endl;
	*/

	//substr函数
	/*
	string myString, first;
	myString = "programming and problem Solving";
	first = myString.substr(24, 40);
	cout << first << endl;
	*/

	//at函数：访问字符串中的字符,从零开始
	/*
	string myString1, letter;
	myString1 = "programming and problem Solving";
	letter = myString1.at(2);
	cout << letter << endl;
	
	system("pause");
	return 0;
}
*/

//转换大小写，需要引入头文件<cctype>
/*
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main() {
	string myString2;
	char ch1, ch2;
	myString2 = "programming and problem Solving";
	ch1 = toupper(myString2.at(0));
	ch2 = towlower(myString2.at(24));
	cout << myString2 << "\n"<< ch1 <<"\n"<< ch2 << endl;
	system("pause");
	return 0;
}
*/

//抵押贷款计算器
#include<iostream>
#include<string>
#include<cmath>		//包含大量数学函数的头文件
using namespace std;
int main() {
	float Debt, Interest_rate;
	int time;
	cout << "欠款：" << endl;
	cin >> Debt;
	cout << "还款时间：" << endl;
	cin >> time;
	cout << "最新利率：" << endl;
	cin >> Interest_rate;
	float month_Interest = Interest_rate / 12;
	int number_of_payments = time*12;
	float payment;
	payment = Debt * pow(1 + month_Interest, number_of_payments) * month_Interest
		/ (pow(1+month_Interest,number_of_payments) - 1);
	cout << "月供金额： " << payment << endl;
	system("pause");
	return 0;
}
