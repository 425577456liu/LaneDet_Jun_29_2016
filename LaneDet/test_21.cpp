#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
using namespace std;

///////////////////////////////////2016-8-30 08:58:42
//// ���ط���������
//// return plural version of word if ctr isn't 1
//string make_plural(size_t ctr, const string &word, const string &ending)
//{
//	return (ctr == 1) ? word : word + ending;
//}
//
//// ��������
//// find longer of two strings
//const string &shorterString(const string &s1, const string &s2)
//{
//	return s1.size() < s2.size() ? s1 : s2;
//}
//
//// ǧ��Ҫ���ؾֲ����������
//// Disaster: Function returns a reference to a local object
//const string &manip(const string& s)
//{
//	string ret = s;
//	// transform ret in some way
//	return ret; // Wrong: Returning reference to a local object!
//}
//
//// ���÷�����ֵ
//char &get_val(string &str, string::size_type ix)
//{
//	return str[ix];
//}
//
//// Exercises Section 7.3.2
//string processText()
//{
//	string text;
//	while (cin >> text) { /* ... */ }
//	// ....
//	return text;
//}
//
//int main()
//{
//	// ���ط���������
//	string word = "rose";
//	cout << make_plural(word.size(), word, "s") << endl;
//
//	// ��������
//	cout << shorterString("hello world", "world") << endl;
//
//	// ���÷�����ֵ
//	string s("a value");
//	cout << s << endl; // prints a value
//	get_val(s, 0) = 'A'; // changes s[0] to A
//	cout << s << endl; // prints A value
//
//	// Exercises Section 7.3.2
//	//cout << processText() << endl;
//
//	int arri[3] = { 0,1,2 };
//	int ii = arri[1];
//	cout << ii << " " << arri[1] << endl;
//
//	return 0;
//}