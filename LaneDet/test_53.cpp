#include <iostream>
#include <vector>
//#include <bitset>
//#include <list>
//#include <deque>
#include <string>
//#include <fstream>
//#include <sstream>
//#include <algorithm>
//#include <numeric>
//#include <iterator>
//#include <stack> // stack adaptor
//#include <queue> // both queue and priority_queue adaptors
//#include <map>
//#include <set>
#include "Sales_item.h"
//#include "Sales_item1.h"
//#include "Person.h"
//#include "Screen.h"
//#include "TextQuery.h"
//#include "NoName.h"
#include "ScreenPtr.h"
#include "CheckedPtr.h"
#include "absInt.h"
#include "GT_cls.h"
#include <algorithm>
#include <functional>
using namespace std;

/////////////////////////////////2016-12-18 20:41:30
int main()
{
	// ��ʮ���� ���ز�������ת��
	int v1, v2;
	cout << "The sum of " << v1 << " and " << v2
		<< " is " << v1 + v2 << endl;

	// 14.1. ���ز������Ķ���

	// ���صĲ�����

	// ���ز������������һ�������Ͳ�����
	// error: cannot redefine built-in operator for ints
	//int operator+(int, int);

	// ���ȼ��ͽ�����ǹ̶���
	//x == y + z;

	// ���پ߱���·��ֵ����

	// ���Ա��ǳ�Ա

	// ���������غ���Ԫ��ϵ

	// ʹ�����ز�����
	Sales_item item1, item2;
	cout << item1 + item2 << endl;

	// equivalent direct call to nonmember operator function
	cout << operator+(item1, item2) << endl;

	item1 += item2; // expression based "call"
	item1.operator+=(item2); // equivalent call to member operator function

	// 14.1.1. ���ز����������

	// ��Ҫ���ؾ������ú���Ĳ�����

	// ������������������û������

	// ���ϸ�ֵ������

	// ��Ⱥ͹�ϵ������

	// ѡ���Ա��ǳ�Աʵ��

	// 14.2. ��������������

	//vector<int> iv{ 5, 4, 3, 2, 1 };
	//int a = 2, b = 1;

	// c++11
	//[b](int &x) {cout << (x + b) << endl; }
	//[=](int &y) {y *= (a + b); }
	//[=](int &z)->int {return z * (a + b); }

	// 14.6. ��Ա���ʲ�����
	// ��������ȫ��ָ��
	//ScreenPtr p1; // error: ScreenPtr has no default constructor
	ScreenPtr ps(new Screen(4, 4)); // ok: ps points to a copy of myScreen

	// ʹ�����ؼ�ͷ
	Screen myScreen(4, 4);
	ScreenPtr p(&myScreen); // copies the underlying Screen
	p->display(cout);

	// 14.7. �������������Լ�������
	// ��ʽ����ǰ׺ʽ������
	int ia[] = { 1,2,3 }, size = 3;
	CheckedPtr parr(ia, ia + size); // iapoints to an array of ints
	parr.operator++(0); // call postfix operator++
	parr.operator++(); // call prefix operator++

	// 14.8. ���ò������ͺ�������
	int i = -42;
	absInt absObj; // object that defines function call operator
	unsigned int ui = absObj(i); // calls absInt::operator(int)

	// 14.8.1. �������������ڱ�׼���㷨
	// ʹ��GT_cls ��������
	vector<string> words(10);
	cout << count_if(words.begin(), words.end(), GT_cls(6))
		<< " words 6 characters or longer" << endl;

	cout << count_if(words.begin(), words.end(), GT_cls(5))
		<< " words 5 characters or longer" << endl;

	for (size_t i = 0; i != 11; ++i)
		cout << count_if(words.begin(), words.end(), GT_cls(i))
		<< " words " << i
		<< " characters or longer" << endl;

	// 14.8.2. ��׼�ⶨ��ĺ�������
	// ��ʾ���������͵�ģ������
	plus<int> intAdd; // function object that can add two int values
	negate<int> intNegate; // function object that can negate an int value
	// uses intAdd::operator(int, int) to add 10 and 20
	int sum = intAdd(10, 20); // sum = 30
	// uses intNegate::operator(int) to generate -10 as second parameter
	// to intAdd::operator(int, int)
	sum = intAdd(10, intNegate(10)); // sum = 0

	// ���㷨��ʹ�ñ�׼�⺯��
	vector<string> svec(10);
	// passes temporary function object that applies > operator to two strings
	sort(svec.begin(), svec.end(), greater<string>());

	// 14.8.3. ��������ĺ���������
	vector<int> vec(10);
	count_if(vec.begin(), vec.end(), bind2nd(less_equal<int>(), 10));

	count_if(vec.begin(), vec.end(), not1(bind2nd(less_equal<int>(), 10)));

	// Exercise 14.37:
	// 1. ���Ҵ��� 1024 ������ֵ��
	count_if(vec.begin(), vec.end(), bind2nd(greater<int>(), 1024));
	// 2. ���Ҳ����� pooh �������ַ�����
	count_if(svec.begin(), svec.end(), bind2nd(not_equal_to<string>(), "pooh"));
	// 3. ������ֵ���� 2��
	count_if(vec.begin(), vec.end(), bind2nd(multiplies<int>(), 2));

	// Exercise 14.39:
	count_if(svec.begin(), svec.end(), bind2nd(equal_to<int>(), 6));	// ����

	return 0;
}