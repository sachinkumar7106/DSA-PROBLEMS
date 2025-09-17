class Solution {
  public:
  
    void rotateclockwise(string& s){
        char last=s[s.size()-1];
        int ind=s.size()-2;
        while(ind>=0){
            s[ind+1]=s[ind];
            ind--;
        }
        s[0]=last;
    }
    
    void rotateanticlockwise(string& s){
        char first=s[0];
        int ind=1;
        while(ind<s.size()){
            s[ind-1]=s[ind];
            ind++;
        }
        s[s.size()-1]=first;
    }
    
    bool isRotated(string& s1, string& s2) {
        // code here
        if(s1.size()!=s2.size()){
            return false;
        }
        string clockwise=s1,anticlockwise=s1;
        rotateclockwise(clockwise);
        rotateclockwise(clockwise);
        if(clockwise==s2){
            return true;
        }
        
        rotateanticlockwise(anticlockwise);
        rotateanticlockwise(anticlockwise);
        if(anticlockwise==s2){
            return true;
        }
        
        return false;
        
    }
};
