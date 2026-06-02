class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minipri=INT_MAX;
        int maxipro=0;
        for(int i=0;i<n;i++){
            if(prices[i]<minipri){
                minipri=prices[i];
            }
            maxipro=max(maxipro,prices[i]-minipri);
        }
        return maxipro;
    }
};