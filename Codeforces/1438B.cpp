#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int> a;
        for(int i= 0; i < n; ++i) {
            int b;
            cin >> b;
            a[b]++;
        }
        bool ok = 1;
        for(auto e : a) {
            if (e.second > 1) {
                cout << "YES\n";
                ok = 0;
                break;
            }
        }
        if (ok) {
            cout << "NO\n";
        }
    }
}
