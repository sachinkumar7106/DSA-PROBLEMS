// User function template for C++
class Solution {
  public:
    void printbin(int n,vector<string>&ans,string &temp,int zero,int one){
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        temp.push_back('1');
        printbin(n,ans,temp,zero,one+1);
        temp.pop_back();
        if(zero<one){
            temp.push_back('0');
            printbin(n,ans,temp,zero+1,one);
            temp.pop_back();
        }
    }
    vector<string> NBitBinary(int n) {
        // Your code goes here
        vector<string> ans;
        string temp;
        printbin(n,ans,temp,0,0);
        return ans;
    }
};