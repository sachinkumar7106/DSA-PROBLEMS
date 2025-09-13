class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for (int i=0;i<n-2;i++){
            int ans=target-arr[i];
            int start=i+1,end=n-1;
            while(start<end){
                if(arr[start]+arr[end]==ans){
                    return true;
                }else if(arr[start]+arr[end]>ans){
                    end--;
                }else{
                    start++;
                }
            }
        }
        return false;
    }
};