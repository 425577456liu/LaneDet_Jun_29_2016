#pragma once
#include <iostream>
#include <string>
using namespace std;

struct NoName {
	// ���캯��
	NoName() : pstring(new std::string), i(0), d(0) { }
	// Exercise 13.4:���ƹ��캯����ʹ�ù��캯����ʼ���б���ʽ
	//NoName(const NoName &org) :pstring(new string(*(org.pstring))), i(org.i), d(org.d) {}
	// ����
	NoName(const NoName &);
	// Exercise 13.9: ��ֵ������
	NoName& operator=(const NoName &);
	//Exercise 13.12: ��������
	~NoName() { delete pstring; pstring = 0; }
private:
	std::string *pstring;
	int i;
	double d;
};
// ���ƹ��캯��
NoName::NoName(const NoName &orge)
{
	pstring = new string();
	*pstring = *(orge.pstring);
	i = orge.i;
	d = orge.d;
}
//��ֵ������
NoName & NoName::operator=(const NoName &rhs)
{
	pstring = new string();
	*pstring = *(rhs.pstring);
	i = rhs.i;
	d = rhs.d;
	return *this;
}