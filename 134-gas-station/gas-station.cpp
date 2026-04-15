class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tg = 0, tc = 0;
        for (int i = 0; i < gas.size(); i++) {
            tg += gas[i];
            tc += cost[i];
        }

        if (tg < tc) {
            return -1;
        }

        int currgas = 0;
        int str = 0;

        for (int i = 0; i < gas.size(); i++) {
            currgas += gas[i] - cost[i];
            if (currgas < 0) {
                currgas = 0;
                str = i + 1;
            }
        }

        return str;        
    }
};