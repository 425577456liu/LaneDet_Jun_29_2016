#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
using namespace std;

///////////////////////////////////2016-8-30 16:15:23
//// 7.5.2. ��̬�ֲ�����
//size_t count_calls()
//{
//	static size_t ctr = 0; // value will persist across calls
//	return ++ctr;
//}
//
//// inline �������⺯�����õĿ���
//// inline version: find longer of two strings
//inline const string &shorterString(const string &s1, const string &s2)
//{
//	return s1.size() < s2.size() ? s1 : s2;
//}
//
//int main()
//{
//	// 7.5.2. ��̬�ֲ�����
//	for (size_t i = 0; i != 10; ++i)
//		cout << count_calls() << endl;
//
//	// inline �������⺯�����õĿ���
//	cout << shorterString("helloo", "world") << endl;
//
//	return 0;
//}