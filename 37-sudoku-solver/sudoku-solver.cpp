class Solution {
public:
    bool isvalid(vector<vector<char>>&board,int row,int col,char c){
        for(int i=0;i<9;i++){
            if(board[i][col]==c){
                return false;
            }
        }
        for(int j=0;j<9;j++){
            if(board[row][j]==c){
                return false;
            }
        }
        int boxrow=3*(row/3);
        int boxcol=3*(col/3);
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[boxrow+i][boxcol+j]==c){
                    return false;
                }
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board) {

        for(int row = 0; row < 9; row++) {
            for(int col = 0; col < 9; col++) {

                if(board[row][col] == '.') {

                    for(char num = '1'; num <= '9'; num++) {

                        if(isvalid(board, row, col, num)) {

                            board[row][col] = num;

                            if(solve(board))
                                return true;

                            board[row][col] = '.';
                        }
                    }

                    return false;
                }
            }
        }

        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
   
};