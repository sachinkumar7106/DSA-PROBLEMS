class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        // code here
        int n=arr.size();
        if(n==0)
        return {};
        
        vector<int> ans(n,-1);
        stack<int> st;
        
        for(int i=0;i<2*n;i++){
            int curr=arr[i%n];
            while(!st.empty()&&arr[st.top()]<curr){
                ans[st.top()]=curr;
                st.pop();
            }
            if(i<n){
                st.push(i);   
            }
        }
        return ans;
    }
};