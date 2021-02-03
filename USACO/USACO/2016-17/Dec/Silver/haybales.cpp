#include<bits/stdc++.h>

using namespace std;

int main() {
    ofstream cout ("haybales.out");
    ifstream cin ("haybales.in");
    int n, q, a[int(1e5)];
    cin >> n >> q;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a+n);
    while(q--) {
        int l, r;
        cin >> l >> r;
        cout << upper_bound(a, a+n, r) - lower_bound(a, a+n, l) << "\n";
    }
}