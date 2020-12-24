#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin >> k;
    while(k--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        vector<int> c;
        for(int i = 0; i < n; ++i) {
            if (a[i] != b[i]) {
                c.push_back(i);
            }
        }
        if (c.size() == 2 && a[c[0]] == a[c[1]] && b[c[0]] == b[c[1]]) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}
