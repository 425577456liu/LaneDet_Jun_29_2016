#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
#include "Sales_item1.h"
#include "Person.h"
#include "Screen.h"
using namespace std;

/////////////////////////////2016-9-2 10:48:46
////Exercises Section 12.1.4
//class X
//{
//	Y *py;
//};
//class Y
//{
//	X xa;
//};

//int main()
//{
//	Sales_item si;
//	Person p;
//
//	///////////////////////////2016-9-2 17:24:53
//	Screen sc;
//	Screen myscreen;
//	char ch = myscreen.get();// calls Screen::get()
//	ch = myscreen.get(0, 0); // calls Screen::get(index, index)
//
//	Sales_item1 si11;
//	si11.avg_price();
//
//	//// Ϊʲô��Ķ����ԷֺŽ���
//	//class Sales_item { /* ... */ };
//	//class Sales_item { /* ... */ } accum, trans;
//
//	const int ival = 1024;
//	const int & const refVal = ival;	// anachronism used : qualifiers on reference are ignored(�ײ�)
//	const int * const pi = &ival;
//
//	return 0;
//}

///////////////////////////////////2016-9-3 12:09:33
// �������ݣ�

// ÿ�ε��ú���ʱ���������´����ú������е��βΣ���ʱ�����ݵ�ʵ�ν����ʼ����Ӧ���βΡ��βεĳ�ʼ��������ĳ�ʼ��һ����

// ����βξ��з��������ͣ�����ʵ�ε�ֵ����ͨ�ķ��������͵Ĳ���ͨ�����ƶ�Ӧ��ʵ��ʵ�ֳ�ʼ��������ʵ�θ�����ʼ���β�ʱ��������û�з��ʵ��������ݵ�ʵ�α�����˲����޸�ʵ�ε�ֵ��

// ����β�Ϊ�������ͣ��� 2.5 �ڣ�������ֻ��ʵ�εı���������������һ���������β�ֱ�ӹ����������󶨵Ķ��󣬶�������Щ����ĸ�����


// �������أ�

// �����ķ���ֵ���ڳ�ʼ���ڵ��ú�������������ʱ�����ú�������ֵ��ʼ����ʱ��������ʵ�γ�ʼ���βεķ�����һ���ġ�

// ���ط�����
// �ڵ��ú����ĵط��Ὣ��������ֵ���Ƹ���ʱ����

// ��������
// ������������������ʱ��û�и��Ʒ���ֵ���෴�����ص��Ƕ�����

