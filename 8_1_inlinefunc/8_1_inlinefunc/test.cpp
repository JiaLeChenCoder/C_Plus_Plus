#include "func.h"
//int main()
//{
//	f(10);
//	return 0;
//}

class Date
{
public:
	
	// ����û���ʽ�����˹��캯��������������������
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
	// ��Date���й��캯�����κ󣬴������ͨ�����룬��Ϊ�ڶ���һ�����ʱ�򣬱�����������һ���޲ε�Ĭ�Ϲ��캯��
	// ��Date���й��캯���ſ����������ʧ�ܣ���Ϊһ����ʽ�����κι��캯��������������������
	// �޲ι��캯�����ſ��󱨴�error C2512: ��Date��: û�к��ʵ�Ĭ�Ϲ��캯�����ã���Ϊ����ĵ��÷�ʽ���޲εĵ��÷�ʽ
	Date d1;//������Ҫ����һ���࣬�ڴ�ͬʱ���������Զ��������Լ�д�õĹ��캯�����߱������Զ����ɵ�Ĭ�Ϲ��캯��

	return 0;
}
