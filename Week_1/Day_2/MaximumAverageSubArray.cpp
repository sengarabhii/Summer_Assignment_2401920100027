class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        int n = nums.size();
        int i ;
        //first window
        for(i = 0 ; i < k ; i++){
            sum+=nums[i];
        }
        double ans = sum;
        //slide window
        while(i<n){
            sum-=nums[i-k];
            sum+=nums[i];
            ans = max(ans,sum);
            i++;
        }
        return ans/k;


        
    }
};
