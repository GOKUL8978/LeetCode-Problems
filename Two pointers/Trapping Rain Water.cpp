class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l =0;
        int r = n-1;
        int count  = 0;
        int leftMax = height[l] , rightMax= height[r];
        if(n == 0) return 0;
        while(l<r){
            if(leftMax <rightMax){
                l++;
                leftMax = max(leftMax,height[l]);
                count += leftMax - height[l];
            }
            else{
                r--;
                rightMax = max(rightMax,height[r]);
                count += rightMax - height[r];
            }
        }
        return count;
    }
};
