class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }

    bool solve(vector<vector<char>>&board){
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.'){
                    for(char x='1' ; x<='9';x++){
                        if(isv(board,i,j,x)){
                            board[i][j]=x;
                        if(solve(board)==true){
                            return true;
                        }
                        else{
                            board[i][j]='.';
                        }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool isv(vector<vector<char>>&board,int row,int col,char x){
        for(int i=0;i<9;i++){
            if(board[i][col]==x){
                 return false;
            }
            if(board[row][i]==x){
            return false;
            }
            if(board[3*(row/3) +i/3][3*(col/3)+i%3]==x) {
            return false;
            }
        }
        return true;
    }
};