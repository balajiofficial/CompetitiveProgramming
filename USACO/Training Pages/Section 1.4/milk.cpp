/*
 ID: balajik2
 TASK: milk
 LANG: C++14
 */

#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool comp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main() {
    ofstream cout ("milk.out");
    ifstream cin ("milk.in");
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> a;
    for(int i = 0; i < m; ++i) {
        int b, c;
        cin >> b >> c;
        a.emplace_back(b, c);
    }
    sort(a.begin(), a.end(), comp);
    int ans = 0;
    for(int i = 0; i < m; ++i) {
        if (n == 0) break;
        int res = min(a[i].second, n);
        ans += res * a[i].first;
        n -= res;
    }
    cout << ans << "\n";
}