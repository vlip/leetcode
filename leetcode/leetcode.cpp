// leetcode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include <stdlib.h>
#include <iostream>
#include <string>

#include "Demo79.h"

using namespace std;

int main()
{
	std::cout << "Hello World!\n";

	vector<vector<char> > board = { {'A', 'B', 'C', 'E'},{'S', 'F', 'C', 'S'},{'A', 'D', 'E', 'E'}  };
	string word = "ABCB";

	Demo79 *demo = new Demo79();
	bool res = demo->exist(board, word);
	cout<<res<<endl;
	delete demo;
	return 0;
}
