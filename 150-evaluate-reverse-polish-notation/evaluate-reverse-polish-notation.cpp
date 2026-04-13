class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto i: tokens){
            if(i=="+"){
                int f=st.top();
                st.pop();
                int s=st.top();
                st.pop();
                st.push(f+s);
            }
            else if(i=="-"){
                int f=st.top();
                st.pop();
                int s=st.top();
                st.pop();
                st.push(s-f);
            } else if(i=="*"){
                int f=st.top();
                st.pop();
                int s=st.top();
                st.pop();
                st.push(f*s);
            }else if(i=="/"){
                int f=st.top();
                st.pop();
                int s=st.top();
                st.pop();
                st.push((int)s/f);
            }else{
                int j=stoi(i);
                st.push(j);
            }
        }
        return st.top();
    }
};