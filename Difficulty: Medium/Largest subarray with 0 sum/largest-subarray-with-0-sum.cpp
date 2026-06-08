class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        int n=arr.size();
        int res=0;
        unordered_map<int,int>sumind;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0){
                res=i+1;
            }else if(sumind.find(sum)!=sumind.end()){
                res=max(res,i-sumind[sum]);
            }else{
                sumind[sum]=i;
            }
        }
        return res;
    }
};