class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<bool>rzero(row,false);
        vector<bool>czero(col,false);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    rzero[i]=true;
                    czero[j]=true;
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(rzero[i]||czero[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
};