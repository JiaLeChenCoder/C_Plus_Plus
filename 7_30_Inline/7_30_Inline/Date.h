#pragma once
#include<iostream>
using namespace std;
#include<stdio.h>

class Date
{
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);
public:
	// ��ȡĳ��ĳ�µ�����
	int GetMonthDay(int year, int month);
	// ȫȱʡ�Ĺ��캯��
	Date(int year = 1900, int month = 1, int day = 1);
	// �������캯��
	  // d2(d1)
	Date(const Date& d);

	void  Print()const;
	// ��ֵ���������
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

	// ��������
	// ���������
	// ++d1 -> d1.operator++()
	Date& operator++();
	// d1++ -> d1.operator++(0)
	// ��һ��int����������ռλ����ǰ��++���ɺ������ؽ�������
	// ���ʺ���++���ã��������������⴦��
	Date operator++(int);
	Date& operator--();
	Date operator--(int);

	int operator-(const Date& d) const;

private:
	int _year;
	int _month;
	int _day;
};