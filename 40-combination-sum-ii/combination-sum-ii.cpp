class Solution {
public:
    void res(vector<int>& arr, vector<vector<int>>& result, vector<int>& temp,
             int ind, int target) {
        if (target == 0) {
            result.push_back(temp);
            return;
        }
        for (int i = ind; i < arr.size(); i++) {
            if (i > ind && arr[i] == arr[i - 1]) {
                continue;
            }
            if (arr[i] > target) {
                break;
            }
            temp.push_back(arr[i]);
            res(arr, result, temp, i + 1, target - arr[i]);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        vector<int> temp;
        res(candidates, result, temp, 0, target);
        return result;
    }
};