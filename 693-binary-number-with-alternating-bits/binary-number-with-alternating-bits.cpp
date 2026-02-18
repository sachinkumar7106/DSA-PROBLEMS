class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int>bits;
        while(n){
            int rem=n%2;
            n/=2;
            bits.push_back(rem);
        }
        int siz=bits.size();
        for(int i=1;i<siz;i++){
            if(bits[i-1]==bits[i]){
                return false;
            }
        }
        return true;
    }
};