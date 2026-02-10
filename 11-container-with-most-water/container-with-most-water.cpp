class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int minht=0;
        int n=height.size();
        int left=0,right=n-1;
        while(left<right){
            minht=min(height[left],height[right]);
            maxwater=max(maxwater,(right-left)*minht);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxwater;
    }
};