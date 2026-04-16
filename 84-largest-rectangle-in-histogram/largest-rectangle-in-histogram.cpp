class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxarea = 0;
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                int ht = heights[st.top()];
                st.pop();
                int left ;
                if (st.empty()) {
                    left = -1;
                }else{
                    left=st.top();
                }
                int right = i;
                int width = right - left - 1;
                maxarea = max(maxarea, width * ht);
            }
            st.push(i);
        }
        while (!st.empty()) {
            int ht = heights[st.top()];
            st.pop();

            int right = n;
            int left = st.empty() ? -1 : st.top();

            int width = right - left - 1;
            maxarea = max(maxarea, width * ht);
        }
        return maxarea;
    }
};