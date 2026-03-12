class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int max=0,n=arr.size();
        if(n<3){
            return false;
        }
        for(int i=1;i<n;i++){
            if(arr[i]>arr[max]){
                max=i;
            }
        }
        if(max==0||max==n-1){
            return false;
        }
        for(int i=1;i<max;i++){
            if(arr[i-1]>=arr[i]){
                return false;
            }
        }
        for(int i=max;i<n-1;i++){
            if(arr[i]<=arr[i+1]){
                return false;
            }
        }
        return true;
    }
};