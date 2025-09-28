#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;
        if (a > b) swap(a, b);
        if (a*2 < b) {
            cout << "NO\n";
            continue;
        }
        if ((a + b) % 3 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}