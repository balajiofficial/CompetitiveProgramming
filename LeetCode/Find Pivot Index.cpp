class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> p(nums.size());
        for(int i = 0; i < nums.size(); ++i) {
            if (i != 0) p[i] = p[i - 1] + nums[i];
            else p[i] = nums[i];
        }
        for(int i = 0; i < nums.size(); ++i) {
            int temp = (i == 0 ? 0 : p[i - 1]);
            if (temp == p[nums.size() - 1] - p[i]) return i;
        }
        return -1;
    }
};
