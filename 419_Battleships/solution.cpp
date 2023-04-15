#include "header.h"

int countBattleships(vector<vector<char>>& board) {

    int count = 0;

    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            if (i > 0 && j > 0 && board[i][j] == 'X' && board[i][j - 1] != 'X' && board[i - 1][j] != 'X') {
                ++count;
            }
            else if (i > 0 && j == 0 && board[i][j] == 'X' && board[i - 1][j] != 'X') {
                ++count;
            }
            else if (i == 0 && j > 0 && board[i][j] == 'X' && board[i][j - 1] != 'X') {
                ++count;
            }
            else if (i == 0 && j == 0 && board[i][j] == 'X') {
                ++count;
            }
        }
    }
    return count;
}