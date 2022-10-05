class Solution {
public:
    bool isPalindrome(int x) {
        string ans = to_string(x);
        string rev = "";
        for (int i = 0; i < ans.size(); i++) {
            rev += ans[ans.size() - 1 - i];
        }
        return rev == ans;
    }
};
