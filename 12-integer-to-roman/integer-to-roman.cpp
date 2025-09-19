class Solution {
public:
    string thousand(int num){
        if(num==1){
            return "M";
        }else if(num==2){
            return "MM";
        }else if(num==3){
            return "MMM";
        }
        return "";
    }
    string hundred(int num){
        if(num==1){
            return "C";
        }else if(num==2){
            return "CC";
        }else if(num==3){
            return "CCC";
        }else if(num==4){
            return "CD";
        }else if(num==5){
            return "D";
        }else if(num==6){
            return "DC";
        }else if(num==7){
            return "DCC";
        }else if(num==8){
            return "DCCC";
        }else if(num==9){
            return "CM";
        }
        return "";
    }
    string ten(int num){
        if(num==1){
            return "X";
        }else if(num==2){
            return "XX";
        }else if(num==3){
            return "XXX";
        }else if(num==4){
            return "XL";
        }else if(num==5){
            return "L";
        }else if(num==6){
            return "LX";
        }else if(num==7){
            return "LXX";
        }else if(num==8){
            return "LXXX";
        }else if(num==9){
            return "XC";
        }
        return "";
    }
    string one(int num){
        if(num==1){
            return "I";
        }else if(num==2){
            return "II";
        }else if(num==3){
            return "III";
        }else if(num==4){
            return "IV";
        }else if(num==5){
            return "V";
        }else if(num==6){
            return "VI";
        }else if(num==7){
            return "VII";
        }else if(num==8){
            return "VIII";
        }else if(num==9){
            return "IX";
        }
        return "";
    }
    string intToRoman(int num) {
        string ans="";
        ans+=thousand(num/1000);
        num%=1000;
        ans+=hundred(num/100);
        num%=100;
        ans+=ten(num/10);
        num%=10;
        ans+=one(num);
        return ans;
    }
};