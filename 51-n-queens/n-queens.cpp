class Solution {
public:
    bool safe(int row,int col, vector<vector<char>>&board,int n){
        for(int i=0;i<col;i++){
            if(board[row][i]=='Q')
            {return false;}
        }
        for(int i=row,j=col;i>=0&&j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        for(int i=row,j=col;i<n&&j>=0;i++,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }
    void solve(int col,vector<vector<char>>&board,vector<vector<string>>&result,int n){
        if(col==n){
            vector<string>temp;
            for(int i=0;i<n;i++){
                string row(board[i].begin(),board[i].end());
                temp.push_back(row);
            }
            result.push_back(temp);
            return;
        }
        for(int i=0;i<n;i++){
            if(safe(i,col,board,n)){
                board[i][col]='Q';
                solve(col+1,board,result,n);
                board[i][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>result;
        vector<vector<char>>board(n,vector<char>(n,'.'));
        solve(0,board,result,n);
        return result;
    }
};