#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
using namespace std;

////////////////////////////2016-8-28 16:19:14
// ʹ�������βη��ض������Ϣ
// returns an iterator that refers to the first occurrence of value
// the reference parameter occurs contains a second return value
vector<int>::const_iterator find_val(
	vector<int>::const_iterator beg, // first element
	vector<int>::const_iterator end, // one past last element
	int value, // the value we want
	vector<int>::size_type &occurs) // number of times it occurs
{
	// res_iter will hold first occurrence, if any
	vector<int>::const_iterator res_iter = end;
	occurs = 0; // set occurrence count parameter
	for (; beg != end; ++beg)
		if (*beg == value) {
			// remember first occurrence of value
			if (res_iter == end)
				res_iter = beg;
			++occurs; // increment occurrence count
		}
	return res_iter; // count returned implicitly in occurs
}

/////////////////////////////////////////////////2016-8-28 21:37:11
// ������ָ�� const ������
// returns index of first occurrence of c in s or s.size() if c isn't in s
// Note: s doesn't change, so it should be a reference to const
string::size_type find_char(string &s, char c)
{
	string::size_type i = 0;
	while (i != s.size() && s[i] != c)
		++i; // not found, look at next character
	return i;
}

//// ������ָ�� const ������
//bool is_sentence(const string &s)
//{
//	// if there's a period and it's the last character in s
//	// then s is a sentence
//	//return (find_char(s, '.') == s.size() - 1);	// ���ܽ��������͵Ĳ������ݸ� find_char����Ϊ�����ڴ��õ�һ��ָ��� const string ��������á�
//}

//int main()
//{
//	vector<int> ivec;
//	for (vector<int>::size_type ix = 0; ix != 10; ++ix)
//		ivec.push_back(ix); // ok: adds new element with value ix
//	ivec.push_back(8); ivec.push_back(8);
//	// show
//	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
//		cout << *iter << endl;
//
//	vector<int>::size_type ctr;
//	vector<int>::const_iterator it = find_val(ivec.begin(), ivec.end(), 8, ctr);
//	cout << *it << " " << ctr << endl;		// �����ҵ�������ivec�У���*it����������ֹ
//
//	return 0;
//}