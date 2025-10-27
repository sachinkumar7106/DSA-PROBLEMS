class Solution {
public:
    int numOf1(string str){
        int siz=str.size();
        int count=0;
        for(int i=0;i<siz;i++){
            if(str[i]=='1')
            count++;
        }
        return count;
    }
    int numberOfBeams(vector<string>& bank) {
        int siz=bank.size();
        vector<int> sec;
        for(int i=0;i<siz;i++){
            if(numOf1(bank[i]))
            sec.push_back(numOf1(bank[i]));
        }
        int ans=0;
        if(sec.size()>=2){
            for(int i=1;i<sec.size();i++){
                ans+=(sec[i-1]*sec[i]);
            }
        }
        return ans;
    }
};