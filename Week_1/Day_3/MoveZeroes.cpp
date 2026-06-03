class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //shift all non zeros value to left
        int i = 0;
        //this is position for upcoming non zero value if available
        for(int j = 0 ; j < nums.size() ; j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }

        
    }
};
