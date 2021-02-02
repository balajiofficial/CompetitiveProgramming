#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    ll a[20], b[20], ans = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    ll c[20];
    for(int i = 0; i < n; ++i) {
        c[i] = 0;
        for(int j = 0; j < n; ++j) {
            if (a[j] <= b[i]) c[i]++;
        }
    }
    sort(c, c+n);
    ans = 1;
    for(int i = 0; i < n; ++i) {
        ans *= (c[i] - i);
    }
    cout << ans << "\n";
}