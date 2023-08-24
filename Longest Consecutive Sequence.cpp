class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxLen = 1;
        int j=1;
        for(int i=0;i<nums.size();i++){
            if(nums[j]-nums[i] == 1){
                maxLen = max(maxLen,j+1);
                j++;
            }else{
                break;
            }
        }
        return maxLen;
    }
};
