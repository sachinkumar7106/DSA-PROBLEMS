class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        vector<double>res;
        sort(sides.begin(),sides.end());
        if(sides[0]+sides[1]<=sides[2]){
            return res;
        }else{
            double a=sides[0],b=sides[1],c=sides[2];
            double A=acos((b*b+c*c-a*a)/(2*b*c))*180.0/M_PI;
            double B=acos((a*a+c*c-b*b)/(2*a*c))*180.0/M_PI;
            double C=acos((a*a+b*b-c*c)/(2*a*b))*180.0/M_PI;
            res.push_back(A);
            res.push_back(B);
            res.push_back(C);
        }
        return res;
    }
};