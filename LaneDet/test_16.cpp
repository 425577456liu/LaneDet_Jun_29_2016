#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
using namespace std;

///////////////////////////////////2016-8-28 09:11:04
//int gcd(int v1, int v2)
//{
//	// return the greatest common divisor
//	while (v2) {
//		int temp = v2;
//		v2 = v1 % v2;
//		v1 = temp;
//	}
//	return v1;
//}
//
//// ָ���β�
//void reset(int *ip)
//{
//	*ip = 0; // changes the value of the object to which ip points
//	ip = 0; // changes only the local value of ip; the argument is unchanged
//}
//
//// const �β�
////void fcn(const int i) { /* fcn can read but not write to i */ }
////void fcn(int i) { /* ... */ } // error: redefines fcn(int)
//
//// �����β�
//// ok: swap acts on references to its arguments
//void swap(int &v1, int &v2)
//{
//	int tmp = v2;
//	v2 = v1; // assigns new value to local copy of the argument
//	v1 = tmp;
//} // local objects v1 and v2 no longer exist
//
//int main()
//{
//	//// get values from standard input
//	//cout << "Enter two values: \n";
//	//int i, j;
//	//cin >> i >> j;
//	//// call gcd on arguments i and j
//	//// and print their greatest common divisor
//	//cout << "gcd: " << gcd(i, j) << endl;
//
//	// ָ���β�
//	int i = 42;
//	int *p = &i;
//	cout << "i: " << *p << '\n'; // prints i: 42
//	reset(p); // changes *p but not p
//	cout << "i: " << *p << endl; // ok: prints i: 0
//	
//	// const �β�
//	const int i1 = 3, j = 6;
//	cout << "gcd: " << gcd(i1, j) << endl;
//	//int k = rgcd(3, 6); // ok: k initialized to 3
//
//	// const������ʼ��
//	int ii = 1, jj = 2;
//	const int cii = 3, cjj = 4;
//	int var1 = cii;			// ��const��const��ʼ��
//	const int var2 = cii;	// const��const��ʼ��
//	const int var3 = ii;	// const�÷�const��ʼ��
//	cout << var3 << endl;
//
//	// �����β�
//	int i2 = 10;
//	int j2 = 20;
//	cout << "Before swap():\ti: "
//		<< i2 << "\tj: " << j2 << endl;
//	swap(i2, j2);
//	cout << "After swap():\ti: "
//		<< i2 << "\tj: " << j2 << endl;
//
//	return 0;
//}