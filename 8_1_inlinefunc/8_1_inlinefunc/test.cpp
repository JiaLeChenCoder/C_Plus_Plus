#include "func.h"
//int main()
//{
//	f(10);
//	return 0;
//}

class Date
{
public:
	
	// 如果用户显式定义了构造函数，编译器将不再生成
	/*Date(int year, int month, int day)
	{
	_year = year;
	_month = month;
	_day = day;
	}
	*/
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	// 将Date类中构造函数屏蔽后，代码可以通过编译，因为在定义一个类的时候，编译器生成了一个无参的默认构造函数
	// 将Date类中构造函数放开，代码编译失败，因为一旦显式定义任何构造函数，编译器将不再生成
	// 无参构造函数，放开后报错：error C2512: “Date”: 没有合适的默认构造函数可用，因为这里的调用方式是无参的调用方式
	Date d1;//这里想要定义一个类，于此同时编译器会自动调用你自己写好的构造函数或者编译器自动生成的默认构造函数

	return 0;
}
