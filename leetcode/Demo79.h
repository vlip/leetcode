#pragma once
#include <vector>
#include <string>

using namespace std;

class Demo79
{
public:
	bool exist(vector<vector<char>> &board, string word);
	bool check(vector<vector<char>>& board, string word, int i, int j);
};

