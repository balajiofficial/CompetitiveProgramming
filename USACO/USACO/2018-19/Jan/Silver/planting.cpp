#include<bits/stdc++.h>

using namespace std;

int n, a[int(1e5) + 1], ans = 0;

int main() {
    ofstream cout ("planting.out");
    ifstream cin ("planting.in");
    cin >> n;
    for(int i = 0; i < n - 1; ++i) {
        int b,  c;
        cin >> b >> c;
        a[b]++;
        a[c]++;
		ans = max({ans, a[b], a[c]});
    }
    cout << ans + 1 << "\n";
}
