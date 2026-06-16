class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        // code here
        priority_queue<int> left; // max heap
        priority_queue<int, vector<int>, greater<int>> right; // min heap

        vector<double> ans;

        for (int x : arr) {

            // Insert
            if (left.empty() || x <= left.top())
                left.push(x);
            else
                right.push(x);

            // Balance heaps
            if (left.size() > right.size() + 1) {
                right.push(left.top());
                left.pop();
            }
            else if (right.size() > left.size()) {
                left.push(right.top());
                right.pop();
            }

            // Calculate median
            if (left.size() == right.size()) {
                ans.push_back((left.top() + right.top()) / 2.0);
            } else {
                ans.push_back(left.top());
            }
        }

        return ans;
    }
};
