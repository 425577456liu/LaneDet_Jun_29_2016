//#include <iostream>
//#include <vector>
//#include <list>
//#include <deque>
//#include <string>
//#include <sstream>
//#include <fstream>
////#include <algorithm>
////#include <stack> // stack adaptor
////#include <queue> // both queue and priority_queue adaptors
////#include <map>
////#include <cassert>
////#include "Sales_item.h"
////#include "Sales_item1.h"
////#include "Person.h"
////#include "Screen.h"
//using namespace std;

//////////////////////////////////////2016-10-9 16:10:33
//int main()
//{
//	//// 8.5. �ַ�����
//	//// stringstream �����ʹ��
//	//string line, word; // will hold a line and word from input, respectively
//	//while (getline(cin, line)) { // read a line from the input into line
//	//		// do per-line processing
//	//	istringstream stream(line); // bind to stream to the line we read
//	//	while (stream >> word) { // read a word from line
//	//		// do per-word processing
//	//		cout << word << endl;
//	//	}
//	//}
//
//	//// stringstream �ṩ��ת���ͣ����ʽ��
//	//int val1 = 512, val2 = 1024;
//	//ostringstream format_message;
//	//// ok: converts values to a string representation
//	//format_message << "val1: " << val1 << "\n"
//	//	<< "val2: " << val2 << "\n";
//
//	//// str member obtains the string associated with a stringstream
//	//istringstream input_istring(format_message.str());
//	//string dump; // place to dump the labels from the formatted message
//	//			 // extracts the stored ascii values, converting back to arithmetic types
//	//input_istring >> dump >> val1 >> dump >> val2;
//	//cout << val1 << " " << val2 << endl; // prints 512 1024
//
//	// Exercise 8.16:
//	// ���ļ��е�ÿһ�д洢�� vector<string> ����������
//	vector<string> svec;
//	ifstream in("ex86");
//	string line;
//	while (getline(in, line), !in.eof())
//	{
//		svec.push_back(line);
//	}
//	vector<string>::iterator it = svec.begin();
//	while (it != svec.end())
//	{
//		cout << (*it++) << endl;
//	}
//	cout << endl;
//
//	// ʹ�� istringstream �� vector ����ÿ�ζ�һ�����ʵ���ʽ��ȡ�洢����
//	vector<string>::iterator it1 = svec.begin();
//	while (it1 != svec.end())
//	{
//		istringstream iss(*it1++);
//		string word;
//		while (iss >> word)
//		{
//			cout << word << endl;
//		}
//	}
//
//	return 0;
//}