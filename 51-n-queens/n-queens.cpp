class Solution {
public:
    bool issafe(int row, int col, vector<string> &board, int n) {
        // upper-left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
            if (board[i][j] == 'Q') return false;

        // left row
        for (int j = col; j >= 0; j--)
            if (board[row][j] == 'Q') return false;

        // lower-left diagonal
        for (int i = row, j = col; i < n && j >= 0; i++, j--)
            if (board[i][j] == 'Q') return false;

        return true;
    }

    void check(int col, vector<vector<string>> &answer, vector<string> &board, int n) {
        if (col == n) {
            answer.push_back(board);
            return;
        }
        for (int row = 0; row < n; row++) {
            if (issafe(row, col, board, n)) {
                board[row][col] = 'Q';
                check(col + 1, answer, board, n);
                board[row][col] = '.'; //
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> answer;
        vector<string> board(n, string(n, '.'));
        check(0, answer, board, n);
        return answer;
    }
};