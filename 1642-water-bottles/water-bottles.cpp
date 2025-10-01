class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        int empty_bottles;
        while (numBottles>=numExchange){
            empty_bottles=numBottles%numExchange;
            numBottles=numBottles/numExchange;
            ans+=numBottles;
            numBottles+=empty_bottles;
        }
        return ans;
    }
};