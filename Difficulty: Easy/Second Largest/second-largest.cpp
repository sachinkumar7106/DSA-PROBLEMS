class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int L=-1,L2=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>L){
                L=arr[i];
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==L){
                continue;
            }
            else if(arr[i]>L2){
                L2=arr[i];
            }
        }
        return L2;
    }
};