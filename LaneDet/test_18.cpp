#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
using namespace std;

////////////////////////////////////2016-8-29 09:05:53
//// ����ָ��ָ�������
//// swap values of two pointers to int
//void ptrswap(int *&v1, int *&v2)
//{
//	int *tmp = v2;
//	v2 = v1;
//	v1 = tmp;
//}
//
//// vector �������������͵��β�
//// pass iterators to the first and one past the last element to print
//void print(vector<int>::const_iterator beg,
//	vector<int>::const_iterator end)
//{
//	while (beg != end) {
//		cout << *beg++;
//		if (beg != end) cout << " "; // no space after last element
//	}
//	cout << endl;
//}
//
//// 7.2.4. �����β�
//// three equivalent definitions of printValues
//void printValues1(int*) { /* ... */ }
//void printValues2(int[]) { /* ... */ }
//void printValues3(int[10]) { /* ... */ }
//
//// �βεĳ��Ȼ��������
//// parameter treated as const int*, size of array is ignored
//void printValues(const int ia[10])
//{
//	// this code assumes array has 10 elements;
//	// disaster if argument has fewer than 10 elements!
//	for (size_t i = 0; i != 10; ++i)
//	{
//		cout << ia[i] << endl;
//	}
//}
//
//// ����ʵ��
//// f won't change the elements in the array
//void f(const int*) { /* ... */ }
//
//// ͨ�����ô�������
//// ok: parameter is a reference to an array; size of array is fixed
//void printValues4(int(&arr)[10])
//{
//	for (size_t i = 0; i != 10; ++i) {
//		cout << arr[i] << endl;
//	}
//}
//
//// ��ά����Ĵ���
//// first parameter is an array whose elements are arrays of 10 ints
//void printValues5(int(*matrix)[10], int rowSize);
//
//// first parameter is an array whose elements are arrays of 10 ints
//void printValues5(int matrix[][10], int rowSize);
//
//// 7.1.1. ������������
//bool is_present(int *, int); // returns bool
//int count(const string &, char); // returns int
////Date &calendar(const char*); // returns reference to Date
//void process(); // process does not return a value
//
//// ʹ�ñ�׼��淶
//void printValues6(const int *beg, const int *end)
//{
//	while (beg != end) {
//		cout << *beg++ << endl;
//	}
//}
//
//// ��ʽ���ݱ�ʾ�����С���β�
//// const int ia[] is equivalent to const int* ia
//// size is passed explicitly and used to control access to elements of ia
//void printValues7(const int ia[], size_t size)
//{
//	for (size_t i = 0; i != size; ++i) {
//		cout << ia[i] << endl;
//	}
//}
//
//int main()
//{
//	// ����ָ��ָ�������
//	int i = 10;
//	int j = 20;
//	int *pi = &i; // pi points to i
//	int *pj = &j; // pj points to j
//	cout << "Before ptrswap():\t*pi: "
//		<< *pi << "\t*pj: " << *pj << endl;
//	ptrswap(pi, pj); // now pi points to j; pj points to i
//	cout << "After ptrswap():\t*pi: "
//		<< *pi << "\t*pj: " << *pj << endl;
//
//	int i1 = 0, j1[2] = { 10, 11 };
//	printValues(&i1); // ok: &i is int*; probable run-time error
//	printValues(j1); // ok: j is converted to pointer to 0th
//					// element; argument has type int*;
//					// probable run-time error
//
//	// ͨ�����ô�������
//	int i2 = 0, j2[2] = { 0, 1 };
//	int k[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	//printValues4(&i2); // error: argument is not an array of 10 ints
//	//printValues4(j2); // error: argument is not an array of 10 ints
//	printValues4(k); // ok: argument is an array of 10 ints
//
//	// ʹ�ñ�׼��淶
//	int j3[2] = { 100, 101 };
//	// ok: j is converted to pointer to 0th element in j
//	// j + 2 refers one past the end of j
//	printValues6(j3, j3 + 2);
//
//	// ��ʽ���ݱ�ʾ�����С���β�
//	int j4[] = { 0, 1, 2 }; // int array of size 2
//	printValues7(j4, sizeof(j4) / sizeof(*j4));
//
//
//	int *ip[4]; // array of pointers to int
//	int(*ip)[4]; // pointer to an array of 4 ints
//
//	return 0;
//}