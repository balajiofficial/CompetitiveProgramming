#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    ll a, ans = 0;
    ll curr = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        ans += max(0LL, curr - a);
        curr = max(curr, a);
    }

    cout << ans << "\n";
}