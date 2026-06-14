class Solution {
  public:
    long long sumBetweenTwoKth(long long A[], long long N, long long k1, long long k2) {
        // Your code goes here
        priority_queue<long long> pq1;
        priority_queue<long long>pq2;
        
        for(long long i=0;i<k1;i++){
            pq1.push(A[i]);
        }
        for(long long i=0;i<k2-1;i++){
            pq2.push(A[i]);
        }
        
        for(long long i=k1;i<N;i++){
            if(A[i]<pq1.top()){
                pq1.pop();
                pq1.push(A[i]);
            }
        }
        
        for(long long i=k2-1;i<N;i++){
            if(A[i]<pq2.top()){
                pq2.pop();
                pq2.push(A[i]);
            }
        }
        
        long long sum1=0,sum2=0;
        while(!pq1.empty()){
            sum1+=pq1.top();
            pq1.pop();
        }
        while(!pq2.empty()){
            sum2+=pq2.top();
            pq2.pop();
        }
        return sum2-sum1;
    }
};