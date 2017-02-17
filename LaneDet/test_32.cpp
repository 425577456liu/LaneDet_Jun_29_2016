#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <fstream>
//#include <algorithm>
#include "Sales_item.h"
#include "Sales_item1.h"
#include "Person.h"
#include "Screen.h"
using namespace std;

////////////////////////////2016-9-11 10:25:35
//class Foo
//{
//public:
//	Foo(int f) :foo(f) {}
//private:
//	int foo;
//};
//
//int main()
//{
//	// ��������������Ҫ��
//	vector<Foo> empty; // ok: no need for element default constructor
//	//vector<Foo> bad(10); // error: no default constructor for Foo
//	vector<Foo> ok(10, 1); // ok: each element initialized to 1
//
//	// ����������
//	// note spacing: use ">>" not ">>" when specifying a container element type
//	vector< vector<string> > lines; // vector of vectors
//
//	// Exercise 9.4:
//	deque<int> ideq;
//	list<int> ilist(ideq.begin(), ideq.end());
//	// Exercise 9.6:
//	list<Foo>test(10, 2);
//
//	// vector �� deque �����ĵ������ṩ���������
//	vector<int> vec;
//	vector<int>::iterator iter = vec.begin() + vec.size() / 2;
//
//	// copy elements from vec into ilist
//	list<int> ilist1(vec.begin(), vec.end());
//	//ilist.begin() + ilist.size() / 2; // error: no addition on list iterators
//
//	// Exercise 9.10:
//	vector< string > svec(10);
//	//vector<string>::iterator it = &svec[0];	// error
//	//for (vector<string>::iterator it = svec.begin(); it != 0; ++it);	// error
//
//	//// ʹ����պ�����ı������
//	//while (first != last) {
//	//	// safe to use *first because we know there is at least one element
//	//	++first;
//	//}
//
//	/////////////////////////////2016-9-11 16:28:30
//	// 9.3.3. ��˳�����������Ԫ��
//	list<int> ilist2;
//	// add elements at the end of ilist
//	for (size_t ix = 0; ix != 4; ++ix)
//		ilist2.push_back(ix);
//	// add elements to the start of ilist
//	for (size_t ix = 0; ix != 4; ++ix)
//		ilist2.push_front(ix);
//	list<int>::iterator beg = ilist2.begin(), end = ilist2.end(), it;
//	for (it = beg; it != end; ++it)
//		cout << *it << endl;
//
//	// ��������ָ��λ�����Ԫ��
//	vector<string> svec1;
//	list<string> slist;
//	string spouse("Beth");
//	// equivalent to calling slist.push_front (spouse);
//	slist.insert(slist.begin(), spouse);
//	// no push_front on vector but we can insert before begin()
//	// warning: inserting anywhere but at the end of a vector is an expensive operation
//	svec1.insert(svec1.begin(), spouse);
//
//	//list<string> lst;
//	//list<string>::iterator iter1 = lst.begin();
//	//string word;
//	//while (cin >> word)
//	//	iter1 = lst.insert(iter1, word); // same as calling push_front
//
//	// ����һ��Ԫ��
//	svec.insert(svec.end(), 10, "Anna");
//
//	string sarray[4] = { "quasi", "simba", "frollo", "scar" };
//	// insert all the elements in sarray at end of slist
//	slist.insert(slist.end(), sarray, sarray + 4);
//	list<string>::iterator slist_iter = slist.begin();
//	// insert last two elements of sarray before slist_iter
//	slist.insert(slist_iter, sarray + 2, sarray + 4);
//
//	// ����洢end �������صĵ�����
//	vector<int> v(2);
//	vector<int>::iterator first = v.begin();
//	//vector<int>::iterator last = v.end(); // cache end iterator
//	//					// diaster: behavior of this loop is undefined
//	//while (first != last) {
//	//	// do some processing
//	//	// insert new value and reassign first, which otherwise would be invalid
//	//	first = v.insert(first, 42);
//	//	++first; // advance first just past the element we added
//	//}
//
//	// safer: recalculate end on each trip whenever the loop adds/erases elements
//	//while (first != v.end()) {
//	//	// do some processing
//	//	first = v.insert(first, 42); // insert new value
//	//	++first; // advance first just past the element we added
//	//}
//
//	/////////////////////////////////////2016-9-11 20:06:45
//	// 9.3.5. ������С�Ĳ���
//	list<int> ilist3(10, 42); // 10 ints: each has value 42
//	ilist3.resize(15); // adds 5 elements of value 0 to back of ilist
//	ilist3.resize(25, -1); // adds 10 elements of value -1 to back of ilist
//	ilist3.resize(5); // erases 20 elements from the back of ilist
//
//	// 9.3.6. ����Ԫ��
//	// check that there are elements before dereferencing an iterator
//	// or calling front or back
//	if (!ilist3.empty()) {
//		// val and val2 refer to the same element
//		list<int>::reference val = *ilist3.begin();
//		list<int>::reference val2 = ilist3.front();
//
//		// last and last2 refer to the same element
//		list<int>::reference last = *--ilist3.end();
//		list<int>::reference last2 = ilist3.back();
//	}
//	// ����Ҳ����
//	int &val3 = *ilist3.begin();
//	int &val4 = ilist3.front();
//
//	// at ���������׳� out_of_range�쳣
//	//vector<string> svec2; // empty vector
//	//cout << svec2[0]; // run-time error: There are no elements in svec!
//	//cout << svec2.at(0); // throws out_of_range exception
//
//	// 9.3.7. ɾ��Ԫ��
//	// ɾ����һ�������һ��Ԫ��
//	//void process(int);
//	//while (!ilist.empty()) {
//	//	process(ilist.front()); // do something with the current top of ilist
//	//	ilist.pop_front(); // done; remove first element
//	//}
//
//	// ɾ�������ڵ�һ��Ԫ��
//	list<string> slist1;
//	slist1.push_back("Quasimodo");
//	slist1.push_back("Quasimodo2");
//	string searchValue("Quasimodo");
//	list<string>::iterator iter2 = find(slist1.begin(), slist1.end(), searchValue);
//	if (iter2 != slist1.end())
//		//slist1.erase(iter2);
//		cout << *++iter2 << endl;
//
//	// ɾ������������Ԫ��
//	slist.clear(); // delete all the elements within the container
//	slist.erase(slist.begin(), slist.end()); // equivalent
//
//	// delete range of elements between two values
//	string val1, val2;
//	list<string>::iterator elem1, elem2;
//	// elem1 refers to val1
//	elem1 = find(slist1.begin(), slist1.end(), val1);
//	// elem2 refers to the first occurrence of val2 after val1
//	elem2 = find(elem1, slist1.end(), val2);
//	// erase range from val1 up to but not including val2
//	slist1.erase(elem1, elem2);
//
//	return 0;
//}