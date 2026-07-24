class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n= board.size();
        vector<map<char,int>> r(9);
        vector<map<char,int>> c(9);
        vector<vector<int>> sqr(9, vector<int>(9, 0));
        for(int i=0; i<9;i++){
            for(int j=0; j<9;j++){
                if(board[i][j]!='.'){
                    if (r[i].find(board[i][j])!= r[i].end()){
                        return false;
                    }
                    else {
                        r[i].insert({board[i][j],1});
                    }
                    int x=((i / 3) * 3) + (j / 3);
                    int y=(int)board[i][j]-49;
                    sqr[x][y]++;
                    if(sqr[x][y]==2)return false;
                }
                if(board[j][i]!='.'){
                    if (c[i].find(board[j][i])!= c[i].end()){
                        return false;
                    }
                    else {
                        c[i].insert({board[j][i],1});
                    }
                }
                
            }
        }
        return true;
    }
};
