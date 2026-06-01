class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minval = INT_MAX;
        int maxprofit = 0;
        for(int i = 0 ; i < prices.size() ; i++){
            minval = min(minval,prices[i]);
            maxprofit = max(maxprofit,prices[i]-minval);
        }
        return maxprofit;
    }
};
