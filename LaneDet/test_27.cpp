#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
#include "Sales_item1.h"
#include "Person.h"
#include "Screen.h"
using namespace std;

////////////////////////////2016-9-3 15:52:19
//int main()
//{
//	// ���� const ������
//	Screen myScreen(5, 3);
//	const Screen blank(5, 3);
//	myScreen.set('#').display(cout); // calls nonconst version
//	blank.display(cout); // calls const version
//
//	// Exercise 12.13:
//	// move cursor to given position, set that character and display the screen
//	myScreen.move(4, 0).set('#').display(cout);
//
//	// ʵ�ξ���ʹ���ĸ����캯��
//	// uses the default constructor:
//	// isbn is the empty string; units_soldand revenue are 0
//	Sales_item1 empty;
//	// specifies an explicit isbn; units_soldand revenue are 0
//	Sales_item1 Primer_3rd_Ed("0-201-82470-1");
//	// reads values from the standard input into isbn, units_sold, and revenue
//	Sales_item1 Primer_4th_ed(cin);
//
//	// ���캯���Զ�ִ��
//	// constructor that takes a string used to create and initialize variable
//	Sales_item1 Primer_2nd_ed("0-201-54848-8");
//	// default constructor used to initialize unnamed object on the heap
//	Sales_item1 *p = new Sales_item1();
//
//	// ʹ��Ĭ�Ϲ��캯��
//	// ok: defines a class object ...
//	Sales_item1 myobj;
//	// ok: create an unnamed, empty Sales_item and use to initialize myobj
//	Sales_item1 myobj = Sales_item1();
//
//	return 0;
//}