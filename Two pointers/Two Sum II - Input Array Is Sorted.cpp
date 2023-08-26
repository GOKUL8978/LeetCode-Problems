class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 0;
        int right = n - 1;
        
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            
            if (sum == target) {
                return {left + 1, right + 1}; // Return one-based indices
            } else if (sum > target) {
                right--;
            } else {
                left++;
            }
        }
        
        // If no solution is found, you should return an empty vector or handle it accordingly.
        return {};
    }
};
