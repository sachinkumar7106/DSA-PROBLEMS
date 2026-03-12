class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>res(n,0);
        if(k==0){
            return res;
        }
        for(int i=0;i<n;i++){
            if(k>0){
                int sum=0;
                int j=i+1;
                for(int l=0;l<k;l++){
                    sum+=code[j%n];
                    j++;
                }
                res[i]=sum;
            }
            if(k<0){
                int sum=0;
                for(int l=1;l<=-k;l++){
                    sum+=code[(i+n-l)%n];
                }
                res[i]=sum;
            }
        }
        return res;
    }
};