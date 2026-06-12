class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> result(n,-1);
        for(int i=0;i<n;i++){
            int j;
            int ans=-1;
            for(j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    break;
                }
            }
            for(int k=j+1;k<m;k++){
                if(nums2[k]>nums1[i]){
                    ans=nums2[k];
                    result[i]=ans;
                    break;
                }
            }
        }
        return result;
    }
};