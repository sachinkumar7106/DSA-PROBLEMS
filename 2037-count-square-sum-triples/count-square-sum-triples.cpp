class Solution {
public:
    int countTriples(int n) {
        int ans=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int k=i*i + j*j;
                int c=sqrt(k);
                if(c*c==k&&c<=n){
                    ans++;
                }
            }
        }
        return ans;
    }
};