string sort(string s) {
    // complete the function here
    vector<int> alpha(26,0);
    for(int i=0;i<s.size();i++){
        alpha[s[i]-'a']++;
    }
    s="";
    for(int i=0;i<26;i++){
        char ch='a'+i;
        while(alpha[i]){
            s+=ch;
            alpha[i]--;
        }
    }
    return s;
}