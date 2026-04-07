class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> res;
        stack<int>mono;
        map<int,int>mp;
        for(int i=0;i<m;i++){
            while(!mono.empty()&& mono.top()<nums2[i]){
                mp[mono.top()]=nums2[i];
                mono.pop();
            }
            mono.push(nums2[i]);
        }
        while(!mono.empty()){
            mp[mono.top()]=-1;
            mono.pop();
        }
        for(int i =0;i<n;i++){
            res.push_back(mp[nums1[i]]);
        }
        return res;

    }
};