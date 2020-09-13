#include "Demo216.h"
#include <vector>
#include <numeric>

vector<vector<int>> Demo216::solution(int k, int n) {
	vector<vector<int>> ans;
	for (int i = 0; i < (1 << 9); i++) {
		if (check(i, k, n)) {
			ans.emplace_back(temp);
		}
	}
	return ans;
}

bool Demo216::check(int mask, int k, int n) {
	temp.clear();
	for (int i = 0; i < 9; ++i) {
		if ((1 << i) & mask) {
			temp.push_back(i + 1);
		}
	}
	return temp.size() == k && accumulate(temp.begin(), temp.end(), 0) == n;
}