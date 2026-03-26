class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int l=0,r=height.size()-1;
        while(l<r){
            int mh=min(height[l],height[r]);
            maxwater=max(maxwater,mh*(r-l));
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxwater;
    }
};