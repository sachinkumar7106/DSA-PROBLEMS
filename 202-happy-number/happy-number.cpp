class Solution {
public:
    int sumdigsq(int n){
        int sum=0;
        while(n){
            int rem=n%10;
            sum+=rem*rem;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=sumdigsq(n);
        int fast=sumdigsq(sumdigsq(n));
        while(slow!=fast){
            slow=sumdigsq(slow);
            fast=sumdigsq(sumdigsq(fast));
        }
        if(slow==1){
            return true;
        }else{
            return false;
        }
    }
};