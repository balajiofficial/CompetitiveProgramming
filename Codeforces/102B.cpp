#include<bits/stdc++.h>

using namespace std;

#define ll long long

int sum(string a) {
    int ans = 0;
    for(char c : a) {
        ans += c - '0';
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin >> a;
    int ans = 0;
    while(a.size() > 1) {
        a = to_string(sum(a));
        ++ans;
    }
    cout << ans << "\n";
}
