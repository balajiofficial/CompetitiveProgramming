#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, ans = 0;
    cin >> n;

    while (n) {
        ans += n/5;
        n /= 5;
    }
    cout << ans << "\n";
}