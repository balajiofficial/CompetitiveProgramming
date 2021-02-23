#include<bits/stdc++.h>

using namespace std;

int main() {
    ofstream cout ("factory.out");
    ifstream cin ("factory.in");
    int n;
    cin >> n;
    pair<int, int> a[100];
    for(int i = 0; i < n - 1; ++i) {
        cin >> a[i].first >> a[i].second;
    }
    int ans = -1;
    for(int i = 1; i <= n; ++i) {
        bool b[101];
        memset(b, 0, sizeof(b));
        b[i] = 1;
        for(int k = 0; k < n; ++k) {
            for(int j = 0; j < n - 1; ++j) {
                if (b[a[j].second] == 1) {
                    b[a[j].first] = 1;
                }
            }
        }
        if (*min_element(b + 1, b + n + 1) == 1) {
            ans = i;
            break;
        }
    }
    cout << ans << "\n";
}