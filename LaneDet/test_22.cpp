#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
using namespace std;

///////////////////////////////////2016-8-30 10:07:16
//// 7.3.3. �ݹ�
//// calculate val!, which is 1*2 *3 ... * val
//int factorial(int val)
//{
//	if (val > 1)
//		return factorial(val - 1) * val;
//	return 1;
//}
//
//// recursive version greatest common divisor program
//int rgcd(int v1, int v2)
//{
//	if (v2 != 0) // we're done once v2 gets to zero
//		return rgcd(v2, v1%v2); // recurse, reducing v2 on each call
//	return v1;
//}
//
//// ����extern���ں���������ָ��Ĭ��ʵ��
//extern string make_plural(size_t, const string &, const string & ending = "s");
//
//extern int counter;	// ��test_1��
//
//int main()
//{
//	cout << factorial(6) << endl;
//
//	// ����extern
//	string word = "rose";
//	cout << make_plural(word.size(), word) << endl;
//
//	extern double test_b;	// ��test_1��
//	cout << test_b << endl;
//	cout << counter << endl;
//
//	return 0;
//}