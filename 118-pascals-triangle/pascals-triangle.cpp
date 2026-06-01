class Solution {
public:
    int pasrowele(int r,int c){
        int result=1;
        for(int i=0;i<c;i++){
            result*=(r-i);
            result/=(i+1);
        }
        return result;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascal;
        for(int i=0;i<numRows;i++){
            vector<int>row;
            for(int j=0;j<i+1;j++){
                row.push_back(pasrowele(i,j));
            }
            pascal.push_back(row);
        }
        return pascal;
    }
};