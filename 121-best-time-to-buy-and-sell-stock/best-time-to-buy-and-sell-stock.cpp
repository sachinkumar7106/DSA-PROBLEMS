class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mxpro=0;
        int minst=INT_MAX;
        for(int i=0;i<n;i++){
            if(minst>prices[i]){
                minst=prices[i];
            }
            mxpro=max(mxpro,prices[i]-minst);
        }
        return mxpro;
    }
};