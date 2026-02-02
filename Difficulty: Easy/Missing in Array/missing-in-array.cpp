class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n=arr.size()+1;
        long long expected_sum=(n*(n+1))/2;
        long long obtained_sum=0;
        for(int i=0;i<n-1;i++){
            obtained_sum+=arr[i];
        }
        return (int)(expected_sum-obtained_sum);
    }
};