class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>res(n,0);
        if(k==0){
            return res;
        }
        if(k>0){
            int sum=0,j=0;
            for(int i=0;i<k;i++){
                j=i+1;
                sum+=code[j%n];
            }
            res[0]=sum;
            for(int i=1;i<n;i++){
                sum-=code[i];
                sum+=code[(j+i)%n];
                res[i]=sum;
            }
        }
        if(k<0){
            int sum=0,j=0;
            for(int i=1;i<=-k;i++){
                j=n-i;
                sum+=code[j%n];
            }
            res[0]=sum;
            for(int i=1;i<n;i++){
                sum-=code[(j+i-1)%n];
                sum+=code[(i-1)%n];
                res[i]=sum;
            }
        }
        return res;
    }
};