#pragma once
#include <iostream>
#include <string>
using namespace std;

// 15.2. ��������������
// 15.2.1. �������
// Item sold at an undiscounted price
// derived classes will define various discount strategies
class Item_base {
public:
	Item_base(const std::string &book = "", double sales_price = 0.0) :
		isbn(book), price(sales_price) { }
	std::string book() const { return isbn; }
	// returns total sales price for a specified number of items
	// derived classes will override and apply different discount algorithms
	virtual double net_price(std::size_t n) const
	{
		cout << "base";
		return n * price;
	}
	virtual ~Item_base() { }
private:
	std::string isbn; // identifier for the item
protected:
	double price; // normal, undiscounted price
};

//// 15.2.2. protected ��Ա
//void Bulk_item::memfcn(const Bulk_item &d, const Item_base &b)
//{
//	// attempt to use protected member
//	double ret = price; // ok: uses this->price
//	ret = d.price; // ok: uses price from a Bulk_item object
//	ret = b.price; // error: no access to price from an Item_base
//}

// 15.2.3. ������
// ����������
// discount kicks in when a specified number of copies of same book are sold
// the discount is expressed as a fraction used to reduce the normal price
class Bulk_item : public Item_base {
public:
	Bulk_item() : min_qty(0), discount(0.0) { }	// ��仰��p726
	// redefines base version so as to implement bulk purchase discount policy
	double net_price(std::size_t) const;
private:
	std::size_t min_qty; // minimum purchase for discount to apply
	double discount; // fractional discount to apply
};

// �������еĺ�������ʹ�û���ĳ�Ա
// if specified number of items are purchased, use discounted price
double Bulk_item::net_price(size_t cnt) const
{
	cout << "derived";
	if (cnt >= min_qty)
		return cnt * (1 - discount) * price;
	else
		return cnt * price;
}

// 15.1. ��������̣�����
// ��̬��
// calculate and print price for given number of copies, applying any discounts
void print_total(ostream &os, const Item_base &item, size_t n)
{
	os << "ISBN: " << item.book() // calls Item_base::book
		<< "\tnumber sold: " << n << "\ttotal price: "
		// virtual call: which version of net_price to call is resolved at run time
		<< item.net_price(n) << endl;
}

// 15.2.4. virtual ��������Ա����
// ���������͵������ת��

///////////////////////////////////2017-1-10
// 15.2.5. ���á�˽�к��ܱ����ļ̳�
class Base {
public:
	void basemem(); // public member
protected:
	int i; // protected member
	// ...
};
struct Public_derived : public Base {
	int use_base() { return i; } // ok: derived classes can access i
	// ...
};
struct Private_derived : private Base {
	int use_base() { return i; } // ok: derived classes can access i
};

// �������ʱ�Ż��������Է�ֱ��������ķ��ʣ�
struct Derived_from_Private : public Private_derived {
	// error: Base::i is private in Private_derived
	//int use_base() { return i; }
};
struct Derived_from_Public : public Public_derived {
	// ok: Base::i remains protected in Public_derived
	int use_base() { return i; }
};

// ȥ�������Ա
class Base1 {
public:
	std::size_t size() const { return n; }
protected:
	std::size_t n;
};
class Derived : private Base1 {
public:
	// maintain access levels for members related to the size of the object
	using Base1::size;
protected:
	using Base1::n;
	// ...
};

// Ĭ�ϼ̳б�������
class Base2 { /* ... */ };
struct D1 : Base2 { /* ... */ }; // public inheritance by default
class D2 : Base2 { /* ... */ }; // private inheritance by default

class D3 : public Base2 {
public:
	/* ... */
};
// equivalent definition of D3
struct D3 : Base2 { // inheritance public by default
	/* ... */ // initial member access public by default
};
struct D4 : private Base2 {
private:
	/* ... */
};
// equivalent definition of D4
class D4 : Base2 { // inheritance private by default
	/* ... */ // initial member access private by default
};

////////////////////////////////2017-1-12 11:32:06
// 15.2.6. ��Ԫ��ϵ��̳�
class Base3 {
	friend class Frnd;
protected:
	int i;
};
// Frnd has no access to members in D1
class D1 : public Base3 {
protected:
	int j;
};
class Frnd {
public:
	int mem(Base3 b) { return b.i; } // ok: Frnd is friend to Base
	int mem(D1 d) { return d.i; } // error: friendship doesn't inherit
};
// D2 has no access to members in Base
class D2 : public Frnd {
public:
	//int mem(Base3 b) { return b.i; } // error: friendship doesn't inherit
};

// 15.2.7. �̳��뾲̬��Ա
struct Base4 {
	static void statmem(); // public by default
};
struct Derived1 : Base4 {
	void f(const Derived1&);
};
void Derived1::f(const Derived1 &derived_obj)
{
	Base4::statmem(); // ok: Base defines statmem
	Derived1::statmem(); // ok: Derived in herits statmem
						// ok: derived objects can be used to access static from base
	derived_obj.statmem(); // accessed through Derived object
	statmem(); // accessed through this class
};

// Exercise 15.13:
struct ConcreteBase {
	static std::size_t object_count();
protected:
	static std::size_t obj_count;
};
struct C1 : public ConcreteBase {
	void ff(const C1& c1)
	{
		C1 c3;
		C1 *pc3 = &c3;
		// C1 �еĳ�Ա��������ConcreteBase �� static ��Ա�����ַ�ʽ
		// ������Ա
		ConcreteBase::object_count();
		C1::object_count();
		c1.object_count();
		pc3->object_count();
		object_count();
		// ���ݳ�Ա
		ConcreteBase::obj_count;
		C1::obj_count;
		c1.obj_count;
		pc3->obj_count;
		obj_count;
	}
};
struct C2 : public ConcreteBase { /* . . . */ };