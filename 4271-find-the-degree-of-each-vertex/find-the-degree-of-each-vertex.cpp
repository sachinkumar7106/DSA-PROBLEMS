class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            int order=0;
            int m=matrix[i].size();
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
                    order++;
                }
            }
            res.push_back(order);
        }
        return res;

        
    }
};