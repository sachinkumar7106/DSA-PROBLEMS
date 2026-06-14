class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1,maxright=0,maxleft=0,water=0;

        while(left<=right){
            if(height[left]<=height[right]){
                if(maxleft<=height[left]){
                    maxleft=height[left];
                }else{
                    water+=maxleft-height[left];
                }
                left++;
            }else{
                if(height[right]>=maxright){
                    maxright=height[right];
                }
                else{
                    water+=maxright-height[right];
                }
                right--;
            }
        }
        return water;
    }
};