#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <fstream>
#include "Sales_item.h"
#include "Sales_item1.h"
#include "Person.h"
#include "Screen.h"
using namespace std;

/////////////////////////////////2016-9-10 11:17:55
//int main()
//{
//	// 9.1. ˳�������Ķ���
//	vector<string> svec; // empty vector that can hold strings
//	list<int> ilist; // empty list that can hold ints
//	deque<Sales_item> items; // empty deque that holds Sales_items
//
//	// ��һ��������ʼ��Ϊ��һ�������ĸ���
//	vector<int> ivec;
//	vector<int> ivec2(ivec); // ok: ivec is vector<int>
//	//list<int> ilist(ivec); // error: ivec is not list<int>
//	//vector<double> dvec(ivec); // error: ivec holds int not double
//
//	// ��ʼ��Ϊһ��Ԫ�صĸ���
//	// initialize slist with copy of each element of svec
//	list<string> slist(svec.begin(), svec.end());
//	// find midpoint in the vector
//	vector<string>::iterator mid = svec.begin() + svec.size() / 2;
//	// initialize front with first half of svec: The elements up to but not including *mid
//	deque<string> front(svec.begin(), mid);
//	// initialize back with second half of svec: The elements *mid through end of svec
//	deque<string> back(mid, svec.end());
//
//	// ָ����ǵ�����
//	char *words[] = { "stately", "plump", "buck", "mulligan" };
//	// calculate how many elements in words
//	size_t words_size = sizeof(words) / sizeof(char *);
//	// use entire array to initialize words2
//	list<string> words2(words, words + words_size);
//
//	// ����ͳ�ʼ��ָ����Ŀ��Ԫ��
//	const list<int>::size_type list_size = 64;
//	list<string> slist(list_size, "eh?"); // 64 strings, each is eh?
//
//	list<int> ilist(list_size); // 64 elements, each initialized to 0
//	// svec has as many elements as the return value from get_word_count
//	extern unsigned get_word_count(const string &file_name);
//	vector<string> svec(get_word_count("Chimera"));
//
//	return 0;
//}