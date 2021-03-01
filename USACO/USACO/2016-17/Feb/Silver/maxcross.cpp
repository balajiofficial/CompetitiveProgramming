#include<bits/stdc++.h>

using namespace std;

int main() {
    ofstream cout ("maxcross.out");
    ifstream cin ("maxcross.in");
    int n, k, b;
    cin >> n >> k >> b;
    vector<int> a(n + 1), ps(n + 1, 0);
    for(int i = 0; i < b; ++i) {
        int c;
        cin >> c;
        a[c] = 1;
    }
    for(int i = 1; i <= n; ++i) {
        ps[i] = ps[i - 1] + a[i];
    }
    int ans = 1e9;
    for(int i = k; i <= n; ++i) {
        ans = min(ans, ps[i] - ps[i - k]);
    }
    cout << ans << "\n";
}
