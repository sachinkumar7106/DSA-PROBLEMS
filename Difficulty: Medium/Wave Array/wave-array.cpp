class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        int n=arr.size();
        int i=1;
        while(i<n){
            swap(arr[i-1],arr[i]);
            i=i+2;
        }
    }
};