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

	return 0;
}