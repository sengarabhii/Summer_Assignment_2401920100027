class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<int> maxi;
        queue<int> q;
        unordered_map<int,int> mp;
        int i;
        for(i = 0 ; i < k ; i++){
            maxi.push(nums[i]);
            q.push(nums[i]);
        }
        ans.push_back(maxi.top());
        mp[q.front()]++;
        while(i<nums.size()){
            while(mp.count(maxi.top())){
                mp[maxi.top()]--;
                if(mp[maxi.top()]==0){
                    mp.erase(maxi.top());
                }
                maxi.pop();
            }
            q.pop();
            mp[q.front()]++;
            maxi.push(nums[i]);
            q.push(nums[i]);
            ans.push_back(maxi.top());
            i++;
        }
        return ans;

        
    }
};
