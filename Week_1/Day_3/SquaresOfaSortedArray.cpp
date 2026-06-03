class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int i = 0; 
        int j = 0;
        while(i<nums.size() && nums[i]<0){
            i++;
        }
        j = i-1;
        while(j>=0 && i<nums.size()){
            if(abs(nums[j])<nums[i]){
                ans.push_back(nums[j]*nums[j]);
                j--;
            }
            else{
                ans.push_back(nums[i]*nums[i]);
                i++;
            }
        }
        while(i<nums.size()){
            ans.push_back(nums[i]*nums[i]);
            i++;
        }
        while(j>=0){
            ans.push_back(nums[j]*nums[j]);
            j--;
        }
        return ans;
        
    }
};
