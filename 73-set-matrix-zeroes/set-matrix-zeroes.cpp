class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>>zeropos;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    zeropos.push_back({i,j});
                }
            }
        }

        int nofz=zeropos.size();

        for(int i=0;i<nofz;i++){
            for(int r=0;r<row;r++){
                matrix[r][zeropos[i][1]]=0;
            }
            for(int c=0;c<col;c++){
                matrix[zeropos[i][0]][c]=0;
            }
        }
    }
};