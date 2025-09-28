#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    char curr;
    int cnt = 0;
    int ans = 0;
    cin >> s;
    curr = s[0];
    for (char c: s) {
        if (curr == c) {
            cnt += 1;
        } else {
            cnt = 1;
            curr = c;
        }
        ans = max(ans, cnt);
    }
    cout << ans << "\n";
}