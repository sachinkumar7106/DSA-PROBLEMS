class Solution {
public:
    void subseq(vector<int>&arr,int index,int size,vector<vector<int>>&ans,vector<int>&temp){
        if(index==size){
            ans.push_back(temp);
            return;
        }
        //when not selecting the element 
        subseq(arr,index+1,size,ans,temp);
        //when selecting the element
        temp.push_back(arr[index]); 
        subseq(arr,index+1,size,ans,temp);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        subseq(nums,0,nums.size(),ans,temp);
        return ans;
    }
};