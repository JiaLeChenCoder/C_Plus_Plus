#include<iostream>
#include<assert.h>
using namespace std;

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
////private:
//	int _year;   // ����
//	int _month;
//	int _day;
//};
//
//class A1 {
//public:
//	void f1() {}
//private:
//	char _ch;
//	int _a;
//};
//
//// ���н��г�Ա����
//class A2 {
//public:
//	void f2() {}
//};
//
//// ����ʲô��û��---����
//class A3
//{};

//int main()
//{
//	cout << sizeof(A1) << endl;
//
//	// ����1byte�����洢���ݣ�ֻ��ռλ����ʾ������ڹ�
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//
//	A2 aa2;
//	A2 aaa2;
//	cout << &aa2 << endl;
//	cout << &aaa2 << endl;
//
//	cout << sizeof(Date) << endl;
//	Date d1;
//	Date d2;
//
//	d1.Print();
//	d2.Print();
//
//	d1._year = 1;
//	d2._year = 2;
//
//	return 0;
//}int main()
//{
//	cout << sizeof(A1) << endl;
//
//	// ����1byte�����洢���ݣ�ֻ��ռλ����ʾ������ڹ�
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//
//	A2 aa2;
//	A2 aaa2;
//	cout << &aa2 << endl;
//	cout << &aaa2 << endl;
//
//	cout << sizeof(Date) << endl;
//	Date d1;
//	Date d2;
//
//	d1.Print();
//	d2.Print();
//
//	d1._year = 1;
//	d2._year = 2;
//
//	return 0;
//}int main()
//{
//	cout << sizeof(A1) << endl;
//
//	// ����1byte�����洢���ݣ�ֻ��ռλ����ʾ������ڹ�
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//
//	A2 aa2;
//	A2 aaa2;
//	cout << &aa2 << endl;
//	cout << &aaa2 << endl;
//
//	cout << sizeof(Date) << endl;
//	Date d1;
//	Date d2;
//
//	d1.Print();
//	d2.Print();
//
//	d1._year = 1;
//	d2._year = 2;
//
//	return 0;
//}int main()
//{
//	cout << sizeof(A1) << endl;
//
//	// ����1byte�����洢���ݣ�ֻ��ռλ����ʾ������ڹ�
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//
//	A2 aa2;
//	A2 aaa2;
//	cout << &aa2 << endl;
//	cout << &aaa2 << endl;
//
//	cout << sizeof(Date) << endl;
//	Date d1;
//	Date d2;
//
//	d1.Print();
//	d2.Print();
//
//	d1._year = 1;
//	d2._year = 2;
//
//	return 0;
//}int main()
//{
//	cout << sizeof(A1) << endl;
//
//	// ����1byte�����洢���ݣ�ֻ��ռλ����ʾ������ڹ�
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//
//	A2 aa2;
//	A2 aaa2;
//	cout << &aa2 << endl;
//	cout << &aaa2 << endl;
//
//	cout << sizeof(Date) << endl;
//	Date d1;
//	Date d2;
//
//	d1.Print();
//	d2.Print();
//
//	d1._year = 1;
//	d2._year = 2;
//
//	return 0;
//}


//class Date
//{
//public:
//	// this��ʵ�κ��β�λ�ò�����ʾд
//	// �����������������ʾ����
//	void Init(int year, int month, int day)
//	{
//		cout << this << endl;
//
//		//this->_year = year;
//		//this->_month = month;
//		//this->_day = day;
//
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << this << endl;
//
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//private:
//	int _year;   // ����
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	d1.Init(2023, 7, 20);
//	d1.Print();
//
//	Date d2;
//	d2.Init(2023, 7, 21);
//	d2.Print();
//
//	return 0;
//}

// 1.�������������н���ǣ�  A�����뱨��  B�����б���  C����������
//class A
//{
//public:
//	void Print()
//	{
//		//cout << _a << endl;
//		cout << "Print()" << endl;
//	}
//// private:
//	int _a;
//};
//
//int main()
//{
//	A* p = nullptr;
//	(*p).Print();
//	p->Print();
//
//
//	//p->_a = 1;
//
//	return 0;
//}

//class A
//{
//public:
//	void Print()
//	{
//		this++;
//		//cout << _a << endl;
//		cout << "Print()" << endl;
//	}
//	// private:
//	int _a;
//};


//class Date
//{
//public:
//	/*Date()
//	{
//		cout << "Date()" << endl;
//		_year = 1;
//		_month = 1;
//		_day = 1;
//	}*/
//	//Date(int year, int month, int day)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	/*void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//
//	void Print()
//	{
//		//cout << this << endl;
//
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//private:
//	int _year;   // ����
//	int _month;
//	int _day;
//};
//
//class Stack
//{
//public:
//	/*Stack()
//	{
//		a = nullptr;
//		top = capacity = 0;
//	}*/
//
//	Stack(size_t n = 4)
//	{
//		if (n == 0)
//		{
//			a = nullptr;
//			top = capacity = 0;
//		}
//		else
//		{
//			a = (int*)malloc(sizeof(int) * n);
//			if(a == nullptr)
//			{
//				perror("realloc fail");
//				exit(-1);
//			}
//
//			top = 0;
//			capacity = n;
//		}
//	}
//
//	// ��Ա����
//	//void Init()
//	//{
//	//	a = nullptr;
//	//	top = capacity = 0;
//	//}
//
//	void Push(int x)
//	{
//		if (top == capacity)
//		{
//			size_t newcapacity = capacity == 0 ? 4 : capacity * 2;
//			int* tmp = (int*)realloc(a, sizeof(int) * newcapacity);
//			if (tmp == nullptr)
//			{
//				perror("realloc fail");
//				exit(-1);
//			}
//			if (tmp == a)
//			{
//				cout << capacity << "ԭ������" << endl;
//			}
//			else
//			{
//				cout << capacity << "�������" << endl;
//			}
//
//			a = tmp;
//			capacity = newcapacity;
//		}
//
//		a[top++] = x;
//	}
//
//	int Top()
//	{
//		return a[top - 1];
//	}
//
//	void Pop()
//	{
//		assert(top > 0);
//		--top;
//	}
//
//	void Destroy()
//	{
//		free(a);
//		a = nullptr;
//		top = capacity = 0;
//	}
//
//	bool Empty()
//	{
//		return top == 0;
//	}
//private:
//	// ��Ա����
//	int* a;
//	int top;
//	int capacity;
//};
//
//int main()
//{
//	Stack st1;
//	st1.Push(1);
//	st1.Push(2);
//	st1.Push(3);
//	st1.Push(4);
//	
//	while (!st1.Empty())
//	{
//		cout << st1.Top() << " ";
//		st1.Pop();
//	}
//	cout << endl;
//
//	st1.Destroy();
//
//	//Stack st2(1000);
//	Stack st2;
//	for (size_t i = 0; i < 1000; i++)
//	{
//		st2.Push(i);
//	}
//
//	while (!st2.Empty())
//	{
//		cout << st2.Top() << " ";
//		st2.Pop();
//	}
//	cout << endl;
//
//	st2.Destroy();
//
//
//	// ������ôд
//	/*Date d1();
//	d1.Print();*/
//
//	Date d1;
//	d1.Print();
//
//	Date d2(2023, 7, 20);
//	d2.Print();
//
//	Date d3(2023);
//	d3.Print();
//
//	Date d4(2023, 7);
//	d4.Print();
//
//	return 0;
//}


class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1)
	{
		cout << "Date(int year = 1, int month = 1, int day = 1)" << endl;

		_year = year;
		_month = month;
		_day = day;
	}

	/*Date()
	{
		_month = 2;
		_day = 2;
	}*/

	void Print()
	{
		//cout << this << endl;

		cout << _year << "/" << _month << "/" << _day << endl;
	}

	~Date()
	{
		cout << "~Date()" << endl;
	}

private:
	int _year = 1;   // ��������ȱʡֵ
	int _month = 1;
	int _day = 1;
};

class Stack
{
public:
	Stack(size_t n = 4)
	{
		cout << "Stack(size_t n = 4)" << endl;

		if (n == 0)
		{
			a = nullptr;
			top = capacity = 0;
		}
		else
		{
			a = (int*)malloc(sizeof(int) * n);
			if (a == nullptr)
			{
				perror("realloc fail");
				exit(-1);
			}

			top = 0;
			capacity = n;
		}
	}

	~Stack()
	{
		cout << "~Stack()" << endl;
		free(a);
		a = nullptr;
		top = capacity = 0;
	}

	void Push(int x)
	{
		if (top == capacity)
		{
			size_t newcapacity = capacity == 0 ? 4 : capacity * 2;
			int* tmp = (int*)realloc(a, sizeof(int) * newcapacity);
			if (tmp == nullptr)
			{
				perror("realloc fail");
				exit(-1);
			}
			if (tmp == a)
			{
				cout << capacity << "ԭ������" << endl;
			}
			else
			{
				cout << capacity << "�������" << endl;
			}

			a = tmp;
			capacity = newcapacity;
		}

		a[top++] = x;
	}

	int Top()
	{
		return a[top - 1];
	}

	void Pop()
	{
		assert(top > 0);
		--top;
	}

	void Destroy()
	{
		free(a);
		a = nullptr;
		top = capacity = 0;
	}

	bool Empty()
	{
		return top == 0;
	}
private:
	// ��Ա����
	int* a;
	int top;
	int capacity;
};

// ����ջʵ��һ������
class MyQueue
{
private:
	Stack _pushst;
	Stack _popst;

	//Date* _ptr;
	//int _size;
};

// ���캯����Ҳ��Ĭ�ϳ�Ա���������ǲ�д�����������Զ�����
// �������ɵ�Ĭ�Ϲ�����ص㣺
// 1�����ǲ�д�Ż����ɣ�����д������һ�����캯���Ͳ���������
// 2���������͵ĳ�Ա���ᴦ��C++11������֧�ָ�ȱʡֵ��
// 3���Զ������͵ĳ�Ա�Żᴦ����ȥ���������Ա��Ĭ�Ϲ��캯��

// �ܽ᣺һ���������Ҫ�����Լ�д���캯����������ʼ����ʽ
// ��Ա����ȫ���Զ������ͣ����Կ��ǲ�д���캯��

//int main()
//{
//	// ���캯����Ҳ��Ĭ�ϳ�Ա���������ǲ�д�����������Զ�����
//	Date d1;
//	d1.Print();
//
//	// MyQueue mq;
//
//	return 0;
//}


bool isValid(const char* s) {
	Stack st;
	while (*s)
	{
		if (*s == '[' || *s == '(' || *s == '{')
		{
			st.Push(*s);
			++s;
		}
		else
		{
			// ��ƥ��
			if (st.Empty())
				return false;

			char top = st.Top();
			st.Pop();

			// ��ƥ��
			if ((*s == ']' && top != '[')
				|| (*s == ')' && top != '(')
				|| (*s == '}' && top == '{'))
			{
				return false;
			}

			++s;
		}
	}

	return st.Empty();
}

int main()
{
	// ���壬������
	Date d1;
	Date d2;

	Stack st1;
	Stack st2;

	MyQueue mq;

	cout << isValid("[[]]()()") << endl;
	cout << isValid("[[]]]") << endl;


	return 0;
}