#include<bits/stdc++.h>

using namespace std;

int main() {
    ofstream cout ("revegetate.out");
    ifstream cin ("revegetate.in");
    int n, m, grass[101];
    cin >> n >> m;
    pair<int, int> a[151];
    for(int i = 0; i < m; ++i) {
        cin >> a[i].first >> a[i].second;
        if (a[i].first < a[i].second) swap(a[i].first, a[i].second);
    }
    for(int i = 1; i <= n; ++i) {
        int ans;
        for(ans = 1; ans <= 4; ++ans) {
            bool ok = 1;
            for(int j = 0; j < m; ++j) {
                if (a[j].first == i && grass[a[j].second] == ans) ok = 0;
            }
            if (ok) break;
        }
        cout << ans;
        grass[i] = ans;
    }
    cout << "\n";
}