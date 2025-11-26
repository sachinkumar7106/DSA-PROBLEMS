// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            if(st.empty()){
                st.push(arr[i]);
            }else if(arr[i]>=0){
                if(st.top()>=0){
                    st.push(arr[i]);
                }else{
                    st.pop();
                }
            }else{
                if(st.top()<0){
                    st.push(arr[i]);
                }else{
                    st.pop();
                }
            }
        }
        
        vector<int> res(st.size());
        for(int i=res.size()-1;i>=0;i--){
            res[i]=st.top();
            st.pop();
        }
        return res;
    }
};