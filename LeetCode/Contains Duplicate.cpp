class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, bool> cnts;
        for (int e : nums) {
            if (cnts[e]) {
                return true;
            } else {
                cnts[e] = true;
            }
        }
        return false;
    }
};
