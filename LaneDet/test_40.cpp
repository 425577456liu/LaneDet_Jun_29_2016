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

////////////////////////////////////2016-10-8 15:36:58
//int main()
//{
//	//cout << BUFSIZ << endl;
//
//	//// 8.3. ����������Ĺ���
//	//ostringstream os;
//	//os << "please enter a value: ";
//
//	//// �����������ˢ��
//	//cout << "hi!" << flush; // flushes the buffer; adds no data
//	//cout << "hi!" << ends; // inserts a null, then flushes the buffer
//	//cout << "hi!" << endl; // inserts a newline, then flushes the buffer
//
//	//// unitbuf ���ݷ�
//	//cout << unitbuf << "first" << " second" << nounitbuf;
//	//cout << "first" << flush << " second" << flush;
//
//	// ��������������һ��
//	cin.tie(&cout); // illustration only: the library ties cin and cout for us
//	ostream *old_tie = cin.tie();
//	cin.tie(0); // break tie to cout, cout no longer flushed when cin is read
//	cin.tie(&cerr); // ties cin and cerr, not necessarily a good idea!
//					// ...
//	cin.tie(0); // break tie between cin and cerr
//	cin.tie(old_tie); // restablish normal tie between cin and cout
//
//	// 8.4.1. �ļ��������ʹ��
//	string ifile, ofile;
//	// construct an ifstream and bind it to the file named ifile
//	ifstream infile(ifile.c_str());
//	// ofstream output file object to write file named ofile
//	ofstream outfile(ofile.c_str());
//
//	ifstream infile1; // unbound input file stream
//	ofstream outfile1; // unbound output file stream
//
//	infile1.open("in"); // open file named "in" in the current directory
//	outfile1.open("out"); // open file named "out" in the current directory
//
//	//// ����ļ����Ƿ�ɹ�
//	//// check that the open succeeded
//	//if (!infile) {
//	//	cerr << "error: unable to open input file: "
//	//		<< ifile << endl;
//	//	return -1;
//	//}
//
//	//// ��������
//	//int input1;
//	//while (cin >> input1)
//	//{
//	//	cout << input1 << endl;
//	//	cout << "rdstate()�����ķ���ֵ�� " << cin.rdstate() << endl;
//	//	cout << "�������λ���صķ���ֵ�� " << cin.bad() << cin.fail() << cin.eof() << endl;
//	//	cout << "goodbit���λ�ķ���ֵ�� " << cin.good() << endl;
//	//	cout << endl;
//	//}
//	//cout << "rdstate()�����ķ���ֵ�� " << cin.rdstate() << endl;
//	//cout << "�������λ���صķ���ֵ�� " << cin.bad() << cin.fail() << cin.eof() << endl;
//	//cout << "goodbit���λ�ķ���ֵ�� " << cin.good() << endl;
//
//	//if (!cin)
//	//	cout << "input error" << endl;
//	//else
//	//	cout << input1 << endl;
//
//	// ���ļ��������ļ���������
//	ifstream infile2("in"); // opens file named "in" for reading
//	infile2.close(); // closes "in"
//	infile2.open("next"); // opens file named "next" for reading
//
//	// ����ļ�����״̬
//	vector<string> files;
//	vector<string>::iterator it = files.begin();
//	string s;
//	void process(string);
//	// for each file in the vector
//	while (it != files.end()) {
//		ifstream input(it->c_str()); // open the file;
//	// if the file is ok, read and "process" the input
//		if (!input)
//			break; // error: bail out!
//		while (input >> s) // do the work on this file
//			process(s);
//		++it; // increment iterator to get next file
//	}
//
//	ifstream input;
//	vector<string>::const_iterator it1 = files.begin();
//	// for each file in the vector
//	while (it != files.end()) {
//		input.open(it1->c_str()); // open the file
//	// if the file is ok, read and "process" the input
//		if (!input)
//			break; // error: bail out!
//		while (input >> s) // do the work on this file
//			process(s);
//		input.close(); // close file when we're done with it
//		input.clear(); // reset state to ok
//		++it1; // increment iterator to get next file
//	}
//
//	//Exercise 8.6:
//	ifstream ifs("ex86");
//	istream &io_test(istream &);
//	istream &rec_ifs = io_test(ifs);
//	cout << "���ص��������rdstate()�����ķ���ֵ��" << rec_ifs.rdstate() << endl;
//
//	// 8.4.2. �ļ�ģʽ
//	// output mode by default; truncates file named "file1"
//	ofstream outfile3("file1");
//	// equivalent effect: "file1" is explicitly truncated
//	ofstream outfile2("file1", ofstream::out | ofstream::trunc);
//	// append mode; adds new data at end of existing file named "file2"
//	ofstream appfile("file2", ofstream::app);
//
//	// ��ͬһ���ļ���������������
//	// open for input and output
//	fstream inOut("copyOut", fstream::in | fstream::out);
//
//	// ģʽ���ļ������Զ�������������
//	ofstream outfile4;
//	// output mode set to out, "scratchpad" truncated
//	outfile4.open("scratchpad", ofstream::out);
//	outfile4.close(); // close outfile so we can rebind it
//	// appends to file named "precious"
//	outfile4.open("precious", ofstream::app);
//	outfile4.close();
//	// output mode set by default, "out" truncated
//	outfile4.open("out");
//
//	// Exercise 8.14:
//	ifstream& open_file(ifstream &, const string &);
//	ifstream in;
//	string file = "ex86";
//	ifstream &rec_in = open_file(in, file);
//	string show;
//	while (rec_in >> show, !rec_in.eof())
//	{
//		cout << show << endl;
//	}
//
//	return 0;
//}
//
//// ����ļ�����״̬
//void process(string){}
//
////Exercise 8.6:
//istream &io_test(istream &iss)
//{
//	string in_stream;
//	while (iss >> in_stream, !iss.eof())	// ��ȡÿ������
//	//while (getline(iss, in_stream), !iss.eof())	// ��ȡÿһ��
//	{
//		cout << in_stream << endl;
//	}
//	iss.clear();	// �д˾�ʱ��rec_ifs.rdstate()Ϊ0����֮Ϊ3
//	cout << "OK! function to end!" << endl;
//
//	return iss;
//}
//
//// 8.4.3. һ���򿪲���������ļ��ĳ���
//// opens in binding it to the given file
//ifstream& open_file(ifstream &in, const string &file)
//{
//	in.close(); // close in case it was already open
//	in.clear(); // clear any existing errors
//				// if the open fails, the stream will be in an invalid state
//	in.open(file.c_str()); // open the file we were given
//	return in; // condition state is good if open succeeded
//}