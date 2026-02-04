class Solution {
public:
    int countDigits(int num) {
        int ans=0,temp=num;
        while(temp){
            int rem=temp%10;
            temp/=10;
            if(num%rem==0){
                ans++;
            }
        }
        return ans;
    }
};