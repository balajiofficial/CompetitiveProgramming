/*
 ID: balajik2
 TASK: barn1
 LANG: C++14
 */

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ofstream cout ("barn1.out");
    ifstream cin ("barn1.in");
    int m, s, c;
    cin >> m >> s >> c;
    int a[200], low = INT_MAX, high = 0;
    for(int i = 0; i < c; ++i) {
        cin >> a[i];
        high = max(high, a[i]);
        low = min(low, a[i]);
    }
    sort(a, a+c);
    vector<int> b;
    for(int i = 1; i < c; ++i) {
        b.push_back(a[i] - a[i - 1] - 1);
    }
    auto comp = [=](int a, int b) {
        return a > b;
    };
    sort(b.begin(), b.end(), comp);
    int ans = high - low + 1;
    int res = min((int)b.size(), m - 1);
    for(int i = 0; i < res; ++i) {
        ans -= b[i];
    }
    cout << ans << "\n";
}