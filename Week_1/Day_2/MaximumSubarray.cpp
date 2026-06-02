class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = nums[0];
        int maxSum = nums[0];
        //at each element we have two choice expand or start fresh from it
        for(int i = 1 ; i < nums.size() ; i++){
            curr = max(curr+nums[i],nums[i]);
            maxSum = max(maxSum,curr);
        }
        return maxSum;
    }
};
