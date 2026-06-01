class Solution {
public:
    vector<int> generaterow(int n){
        vector<int>row;
        int val=1;
        row.push_back(val);

        for(int k=1;k<n;k++){
            val=val*(n-k)/k;
            row.push_back(val);
        }
        return row;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascal;
        for(int i=1;i<=numRows;i++){
            pascal.push_back(generaterow(i));
        }
        return pascal;
    }
};