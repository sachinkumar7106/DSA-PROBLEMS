class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>ans;
        long long base=1;
        while(n>0){
            int d=n%10;
            if(d!=0){
                ans.push_back(d*base);
            }
            n/=10;
            base*=10;
        }
        sort(ans.rbegin(),ans.rend());
        return ans;
    }
};