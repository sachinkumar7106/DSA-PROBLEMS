class Solution {
public:
    class compare{
        public:
        bool operator()(pair<int,int>a,pair<int,int>b){
            return a.second<b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int n:nums){
            mp[n]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare>p(mp.begin(),mp.end());
        vector<int>res;
        while(k--){
            res.push_back(p.top().first);
            p.pop();
        }
        return res;
    }
};