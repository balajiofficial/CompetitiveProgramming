#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n, k;

void solve() {
    cin >> n >> k;
    int ans = 0;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        ans += a;
    }
    if (ans % k == 0) {
        cout << 0 << "\n";
    } else {
        cout << 1 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}