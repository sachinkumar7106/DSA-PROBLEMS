// User function Template for C++

class Solution {
  public:
    int canRepresentBST(int arr[], int N) {
        // code here
        stack<int>lower;
        stack<int>upper;
        lower.push(INT_MIN);
        upper.push(INT_MAX);
        for (int i=0;i<N;i++){
            if(arr[i]<lower.top()){
                return 0;
            }
            while(arr[i]>upper.top()){
                upper.pop();
                lower.pop();
            }
            int left=lower.top();
            int right=upper.top();
            lower.pop();
            upper.pop();
            lower.push(arr[i]);
            upper.push(right);
            lower.push(left);
            upper.push(arr[i]);
        }
        return 1;
    }
};