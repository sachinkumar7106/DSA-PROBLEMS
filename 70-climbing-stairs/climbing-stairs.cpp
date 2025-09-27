class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1){
            return 1;
        }
        int a=1,b=1,next;
        for(int i=2;i<=n;i++){
            next=a+b;
            a=b;
            b=next;
        }
        return next;
    }
};