#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end());
        for (int i=0; i<n; ) {
            int j = i;
            while (j < n && a[j].first == a[i].first)
                j++;
            if (j - i == 1) {
                cout << a[i].second + 1 << "\n";
                goto done;
            }
            i = j;
        }
        cout << "-1\n";
        done:;
    }
 
    return 0;
}
