class Solution {
public:
    void rotatepositive(vector<int>&vec,int k){
        if(vec.size()==0||vec.size()==1){
            return ;
        }
        int n=vec.size();
        k=k%n;
        reverse(vec.begin(), vec.begin() + k);
        reverse(vec.begin() + k, vec.end());
        reverse(vec.begin(), vec.end());
        return;
    }
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int>nonneg;
        vector<int>nonnegind;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                nonneg.push_back(nums[i]);
                nonnegind.push_back(i);
            }
        }
        if(nonneg.size()==0){
            return nums;
        }
        rotatepositive(nonneg,k);
        n=nonneg.size();
        for(int i=0;i<n;i++){
            nums[nonnegind[i]]=nonneg[i];
        }
        return nums;
    }
};