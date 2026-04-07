class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for (auto i:operations){
            if(i=="+"){
                int top1=st.top();
                st.pop();
                int top2=st.top();
                st.push(top1);
                st.push(top1+top2);
            }else if(i=="D"){
                st.push(2*st.top());
            }else if(i=="C"){
                st.pop();
            }
            else{
                st.push(stoi(i));
            }
        }
        int res=0;
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};