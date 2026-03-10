class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int win=n-k;
        int totalsum=0;
        int ans=0;
        int winsum=0;
        for(int i=0;i<n;i++){
            totalsum+=cardPoints[i];
        }
        if(k==n){
            return totalsum;
        }
        for(int i=0;i<win;i++){
            winsum+=cardPoints[i];
        }
        ans=totalsum-winsum;
        for(int i=win;i<n;i++){
            winsum-=cardPoints[i-win];
            winsum+=cardPoints[i];
            ans=max(ans,totalsum-winsum);
        }
        return ans;
    }
};