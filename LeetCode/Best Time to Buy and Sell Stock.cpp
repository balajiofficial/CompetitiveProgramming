class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        for (int i = 0, min_value = prices[0]; i < prices.size(); i++) {
            min_value = min(min_value, prices[i]);
            ans = max(ans, prices[i] - min_value);
        }
        return ans;
    }
};
