#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    const int s = 1e9 + 7;

    ll n, ans = 1;
    cin >> n;
    while(n--) {
        ans *= 2;
        ans %= s;
    }
    cout << ans << "\n";
}