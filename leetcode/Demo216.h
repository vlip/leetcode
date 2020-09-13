#pragma once
#include <vector>

using namespace std;

class Demo216
{
public:
	vector<int> temp;
	vector< vector<int> > solution(int k, int n);
	bool check(int i, int k, int n);
};

