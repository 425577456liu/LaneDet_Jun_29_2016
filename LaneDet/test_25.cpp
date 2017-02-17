#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
using namespace std;

///////////////////////////////2016-9-1 15:14:58
//// 7.9. ָ������ָ��
//// pf points to function returning bool that takes two const string references
//bool(*pf)(const string &, const string &);
//
//// �� typedef �򻯺���ָ��Ķ���
//typedef bool(*cmpFcn)(const string &, const string &);
//
//// ָ������ָ��ĳ�ʼ���͸�ֵ
//// compares lengths of two strings
//bool lengthCompare(const string &, const string &);
//
//bool lengthCompare(const string &, const string &)
//{
//	return 0;
//}
//
//// ָ��ͬ�������͵�ָ��֮�䲻����ת��
//string::size_type sumLength(const string&, const string&);
//bool cstringCompare(char*, char*);
//
//int main()
//{
//	// ָ������ָ��ĳ�ʼ���͸�ֵ
//	cmpFcn pf1 = 0; // ok: unbound pointer to function
//	cmpFcn pf2 = lengthCompare; // ok: pointer type matches function's type
//	pf1 = lengthCompare; // ok: pointer type matches function's type
//	pf2 = pf1; // ok: pointer types match
//
//	cmpFcn pf3 = lengthCompare;		// ֱ�����ú�������Ч���ں�������Ӧ��ȡ��ַ������
//	cmpFcn pf4 = &lengthCompare;
//
//	// ָ��ͬ�������͵�ָ��֮�䲻����ת��
//	// pointer to function returning bool taking two const string&
//	cmpFcn pf;
//	//pf = sumLength; // error: return type differs
//	//pf = cstringCompare; // error: parameter types differ
//	pf = lengthCompare; // ok: function and pointer types match exactly
//
//	// ͨ��ָ����ú���
//	cmpFcn pf6 = lengthCompare;
//	lengthCompare("hi", "bye"); // direct call
//	pf6("hi", "bye"); // equivalent call: pf1 implicitly dereferenced
//	(*pf6)("hi", "bye"); // equivalent call: pf1 explicitly dereferenced
//
//	// ����ָ���β�
//	/* useBigger function's third parameter is a pointer to function
//	* that function returns a bool and takes two const string references
//	* two ways to specify that parameter:
//	*/
//	// third parameter is a function type and is automatically treated as a pointer to function
//	void useBigger(const string &, const string &,
//		bool(const string &, const string &));
//	// equivalent declaration: explicitly define the parameter as a pointer to function
//	void useBigger(const string &, const string &,
//		bool(*)(const string &, const string &));
//
//	// ����ָ������ָ��
//	// ff is a function taking an int and returning a function pointer
//	// the function pointed to returns an int and takes an int* and an int
//	int(*ff(int))(int*, int);
//	// PF is a pointer to a function returning an int, taking an int* and an int
//	typedef int(*PF)(int*, int);
//	PF ff(int); // ff returns a pointer to function
//
//	// func is a function type, not a pointer to function!
//	typedef int func(int*, int);
//	void f1(func); // ok: f1 has a parameter of function type
//	//func f2(int); // error: f2 has a return type of function type
//	func *f3(int); // ok: f3 returns a pointer to function type
//
//	// ָ�����غ�����ָ��
//	extern void ff(vector<double>);
//	extern void ff(unsigned int);
//	// which function does pf1 refer to?
//	void(*pf1)(unsigned int) = &ff; // ff(unsigned)
//	// error: no match: invalid parameter list
//	//void(*pf2)(int) = &ff;
//	// error: no match: invalid return type
//	double(*pf3)(vector<double>);
//	//pf3 = &ff;
//
//	return 0;
//}