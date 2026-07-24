class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<map<char, int>> r(9);
        vector<map<char, int>> c(9);
        vector<vector<int>> sqr(9, vector<int>(10, 0)); // Fixed size to 10

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    // Check Row
                    if (r[i].find(board[i][j]) != r[i].end()) return false;
                    r[i][board[i][j]] = 1;

                    // Check Column
                    if (c[j].find(board[i][j]) != c[j].end()) return false;
                    c[j][board[i][j]] = 1;

                    // Check 3x3 Box
                    int x = (i / 3) * 3 + (j / 3);
                    int y = board[i][j] - '0';
                    
                    if (sqr[x][y] > 0) return false;
                    sqr[x][y]++;
                }
            }
        }
        return true;
    }
};