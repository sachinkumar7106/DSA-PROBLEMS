class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int row=mat.size(),column=mat[0].size();
        int start=0,end=row*column-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int row_ind=mid/column;
            int col_ind=mid%column;
            if(mat[row_ind][col_ind]==x){
                return true;
            }else if (mat[row_ind][col_ind]<x){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return 0;
    }
};