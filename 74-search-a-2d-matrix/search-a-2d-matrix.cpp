class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(),column=matrix[0].size();
        int start=0,end=row*column-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int row_ind=mid/column;
            int col_ind=mid%column;
            if(matrix[row_ind][col_ind]==target){
                return true;
            }else if (matrix[row_ind][col_ind]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return 0;
    }
};