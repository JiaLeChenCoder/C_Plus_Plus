#include"Date.h"

//���ĳ��ĳ�µ�����
int Date::GetMonthDay(int year, int month)
{
	const static int monthArry[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if ((month == 2 && (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)))//����
	{
		return 29;
	}
	else
	{
		return monthArry[month];
	}
}

//ȫȱʡ�Ĺ��캯��
Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;

	//��������Ƿ�Ϸ�
	if (month < 1 || month>12 || day<1 || day>GetMonthDay(year, month))
	{
		cout << "�Ƿ�����" << endl;//������ exit(-1);
	}
}


//��ӡ���ں���
void Date::Print() const
{
	cout << _year << "��" << _month << "��" << _day << "��" << endl;
}

//�������캯��
Date::Date(const Date& d)
{
	_day = d._day;
	_month = d._month;
	_day = d._day;
}

bool Date::operator<(const Date& d) const
{
	if (_year < d._year)
	{
		return true;
	}
	else if (_year == d._year && _month < d._month)
	{
		return true;
	}
	else if (_year == d._year && _month == d._month && _day < d._day)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Date:: operator==(const Date& d) const
{
	return _year == d._year && _month == d._month && _day == d._day;
}

bool Date:: operator<=(const Date& d) const
{
	return *this < d || *this == d;
}

bool Date:: operator>(const Date& d) const
{
	return !(*this <= d);
}
bool Date::operator>=(const Date& d) const
{
	return !(*this < d);
}
bool Date:: operator!=(const Date& d) const
{
	return !(*this == d);
}

Date& Date:: operator+=(int day)
{
	if (day < 0)
	{
		return *this -= (-day);
	}
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		++_month;
		if (_month == 13)
		{
			++_year;
			_month = 1;
		}
	}
	return *this;
}
Date Date:: operator+(int day) const
{
	Date temp(*this);
	temp += day;
	return temp;
}
Date& Date:: operator-=(int day)
{
	if (day < 0)
	{
		return *this += (-day);
	}
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			--_year;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;

}
Date Date:: operator-(int day) const
{
	Date temp(*this);
	temp -= day;
	return temp;
}



Date& Date:: operator++()
{
	*this += 1;
	return *this;;
}

Date Date:: operator++(int)
{
	Date temp(*this);
	*this += 1;
	return temp;
}
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}
Date Date::operator--(int)
{
	Date temp(*this);
	*this -= 1;
	return temp;
}
//����-����
int Date:: operator-(const Date& d) const
{
	Date max = *this;
	Date min = d;
	int f = 1;
	if (*this < d)
	{
		max = d;
		min = *this;
		f = -1;
	}
	int a = 0;
	while (min != max)
	{
		++min;
		++a;
	}
	return a * f;
}

ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "/" << d._month << "/" << d._day << endl;
	return out;
}

istream& operator>>(istream& in, Date& d)
{
	in >> d._year >> d._month >> d._day;
	return in;
}

