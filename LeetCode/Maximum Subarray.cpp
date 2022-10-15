class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = 0, sum = 0, m = nums[0];
        for(int e : nums) {
            sum = max(sum+e, e);
            ans = max(sum, ans);
            m = max(e, m);
        }
        if (m < 0) {
            return m;
        } else {
            return ans;
        }
    }
};
