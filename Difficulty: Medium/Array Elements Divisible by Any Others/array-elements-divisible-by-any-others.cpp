class Solution {
  public:
    int cntSpecialNum(vector<int>& arr) {
        // code here
        int maxi=*max_element(arr.begin(),arr.end());
        vector<int>freq(maxi+1,0);
        vector<bool>spl(maxi+1,false);
        for(int x:arr){
            freq[x]++;
        }
        
        for(int i=1;i<maxi+1;i++){
            if(freq[i]==0){
                continue;
            }
            
            if(freq[i]>1){
                spl[i]=true;
            }
            for(int j=2*i;j<maxi+1;j+=i){
                if(freq[j]>0){
                    spl[j]=true;
                }
            }
        }
        int res=0;
        for(int i:arr){
            if(spl[i]){
                res++;
            }
        }
        return res;
    }
};
