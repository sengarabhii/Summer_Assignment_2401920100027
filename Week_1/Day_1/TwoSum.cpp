class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size()-1;
        vector<int> ans;
        while(i<j){
            if(nums[i]==target-nums[j]){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            else if(nums[i]>target-nums[j]) j--;
            else i++;
        }
        return ans;

        
    }
};
