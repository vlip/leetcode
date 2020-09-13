#include "Demo79.h"

bool Demo79::exist(vector<vector<char> >& board, string word) {
	if (word.length() == 0)return false;
	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board[0].size(); j++) {
			if (check(board, word, i, j)) {
				return true;
			}
		}
	}
	return false;
}

bool Demo79::check(vector<vector<char> >& board, string word, int i, int j) {
	if (i == -1 || j == -1 || i == board.size() || j == board[0].size()) {
		return false;
	}
	if (word.length() == 1) {
		if (board[i][j] == word.at(0))return true;
		else return false;
	}
	if (board[i][j] == word.at(0)) {
		board[i][j] = '.';
		if (check(board,word.substr(1, word.length()-1),i-1,j)|| check(board, word.substr(1, word.length() - 1), i +1, j)
			|| check(board, word.substr(1, word.length() - 1), i, j - 1) || check(board, word.substr(1, word.length() - 1), i, j + 1)) {
			return true;
		}
		else {
			board[i][j] = word.at(0);
		}
	}
	return false;
}