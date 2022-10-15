class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        long long product = 1;
        int is = 0;
        for (int e : nums) {
            if (e != 0)
                product *= (long long)(e);
            else
                is += 1;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (is > 1) {
                ans.push_back(0);
                continue;
            }
            if (nums[i] != 0) {
                if (!is) {
                    ans.push_back(int(product/(long long)(nums[i])));
                } else {
                    ans.push_back(0);
                }
            } else {
                ans.push_back(int(product));
            }
        }
        return ans;
    }
};
