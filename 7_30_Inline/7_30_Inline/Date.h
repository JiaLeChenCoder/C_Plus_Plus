#pragma once
#include<iostream>
using namespace std;
#include<stdio.h>

class Date
{
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);
public:
	// 获取某年某月的天数
	int GetMonthDay(int year, int month);
	// 全缺省的构造函数
	Date(int year = 1900, int month = 1, int day = 1);
	// 拷贝构造函数
	  // d2(d1)
	Date(const Date& d);

	void  Print()const;
	// 赋值运算符重载
  //d2 = d3 -> d2.operator=(&d2, d3)
	bool operator<(const Date& d) const;
	bool operator==(const Date& d) const;
	bool operator<=(const Date& d) const;
	bool operator>(const Date& d) const;
	bool operator>=(const Date& d) const;
	bool operator!=(const Date& d) const;
	~Date()
	{

	}



	Date& operator+=(int day);
	Date operator+(int day) const;
	Date& operator-=(int day);
	Date operator-(int day) const;

	// 函数重载
	// 运算符重载
	// ++d1 -> d1.operator++()
	Date& operator++();
	// d1++ -> d1.operator++(0)
	// 加一个int参数，进行占位，跟前置++构成函数重载进行区分
	// 本质后置++调用，编译器进行特殊处理
	Date operator++(int);
	Date& operator--();
	Date operator--(int);

	int operator-(const Date& d) const;

private:
	int _year;
	int _month;
	int _day;
};