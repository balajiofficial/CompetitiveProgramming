class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return n-1;
        int mind = nums[0], ans = 1, lim = nums[0];
        for(int i = 0; i < n; ++i) {
            if (i > lim) {
                ans++;
                lim = mind;
            }
            mind = max(mind, i+nums[i]);
        }
        return ans;
    }
};
