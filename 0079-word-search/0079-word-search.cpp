
class Solution {
public:
    bool search(vector<vector<char>>& board, string word, int i, int j, int k) {
        if (k == word.size()) {
            return true;
        }

        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size()) {
            return false;
        }

        if (board[i][j] != word[k]) {
            return false;
        }

        char ch = board[i][j];
        board[i][j] = '#';

        bool a = search(board, word, i + 1, j, k + 1);
        bool b = search(board, word, i - 1, j, k + 1);
        bool c = search(board, word, i, j + 1, k + 1);
        bool d = search(board, word, i, j - 1, k + 1);

        board[i][j] = ch;

        return a || b || c || d;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (search(board, word, i, j, 0)) {
                    return true;
                }
            }
        }

        return false;
    }
};
