//#include <iostream>
//#include <string>
//#include "Item_base.h"
//using namespace std;
//
//////////////////////////////2017-1-9 21:10:34
//int main()
//{
//	// 15.2.4. virtual ��������Ա����
//	//// ���������͵������ת��
//	//// function with an Item_base reference parameter
//	//double print_total1(const Item_base&, size_t);
//
//	//Item_base item; // object of base type
//	//// ok: use pointer or reference to Item_base to refer to an Item_base object
//	//print_total1(item, 10); // passes reference to an Item_base object
//	//Item_base *p = &item; // p points to an Item_base object
//	//Bulk_item bulk; // object of derived type
//	//// ok: can bind a pointer or reference to Item_base to a Bulk_item object
//	//print_total1(bulk, 10); // passes reference to the Item_base part of bulk
//	//p = &bulk; // p points to the Item_base part of bulk
//
//	// ����������ʱȷ�� virtual �����ĵ���
//	Item_base base;
//	Bulk_item derived;
//	// print_total makes a virtual call to net_price
//	print_total(cout, base, 10); // calls Item_base::net_price
//	print_total(cout, derived, 10); // calls Bulk_item::net_price
//
//	///////////////////////////////////2017-1-10
//	// 15.2.5. ���á�˽�к��ܱ����ļ̳�
//	// �������ʱ�Ž�������������û��Դ� Base �̳ж����ĳ�Ա�ķ��ʣ�
//	Base b;
//	Public_derived d1;
//	Private_derived d2;
//	b.basemem(); // ok: basemem is public
//	d1.basemem(); // ok: basemem is public in the derived class
//	//d2.basemem(); // error: basemem is private in the derived class
//
//	// Exercise 15.13:
//	C2 c2;
//	C2 *pc2 = &c2;
//	// C2 ���͵Ķ������static��Ա�����ַ�ʽ
//	ConcreteBase::object_count();
//	C2::object_count();
//	c2.object_count();
//	pc2->object_count();
//
//	return 0;
//}