#include"Date.h"
//
//struct A {
//	long a1;
//	short a2;
//	int a3;
//	int* a4;
//};
//
//int main()
//{
//	short a=0;
//	printf("%ld\n", sizeof(a));
//	printf("%d", sizeof(A));
//	return 0;
//}

int main()
{
	Date d1(2023, 7, 30);
	Date d2(2023, 7, 30);
	//cout << d1 << d2;
	d1 -= 100;
	d2 += 100;
	cout << d1 << d2 << endl;
	return 0;
}