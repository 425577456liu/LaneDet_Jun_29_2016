#pragma once
#include <string>
using namespace std;

// 14.8.1. �������������ڱ�׼���㷨
// ����������ԱȺ��������
// determine whether a length of a given word is longer than a stored bound
class GT_cls {
public:
	GT_cls(size_t val = 0) : bound(val) { }
	bool operator()(const string &s)
	{
		return s.size() >= bound;
	}
private:
	std::string::size_type bound;
};