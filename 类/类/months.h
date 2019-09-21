#pragma once
#include<iostream>
#include<string>
using namespace std;
enum Months {
	JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

struct Month {
	string JAN;
};

void output_month(string jan) {
	cout << "今天是" << jan << endl;
	cout << "运行了我哦！" << endl;
}