class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>result;
        for(int i=0;i<n;i++){
            int j;
            int ind=-1;
            for(j=0;j<m;j++){
                if(nums2[j]==nums1[i]){
                    break;
                }
            }
            for(int k=j+1;k<m;k++){
                if(nums2[k]>nums2[j]){
                    ind=nums2[k];
                    break;
                }
            }
            result.push_back(ind);
        }
        return result;
    }
};