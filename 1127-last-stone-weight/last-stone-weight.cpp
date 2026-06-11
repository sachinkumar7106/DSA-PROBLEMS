class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        int n=stones.size();
        for(int i=0;i<n;i++){
            pq.push(stones[i]);
        }

        while(pq.size()>1){
            int val=pq.top();
            pq.pop();
            val-=pq.top();
            pq.pop();
            if(val){
                pq.push(val);
            }
        }
        return pq.size()==1?pq.top():0;
    }
};