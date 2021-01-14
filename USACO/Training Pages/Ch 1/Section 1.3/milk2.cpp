/*
ID: balajik2
TASK: milk2
LANG: C++14
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool comp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main() {
    ofstream cout ("milk2.out");
    ifstream cin ("milk2.in");
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    for(int i = 0; i < n; ++i) {
        int b, c;
        cin >> b >> c;
        a.push_back(make_pair(b, c));
    }
    sort(a.begin(), a.end(), comp);
    vector<pair<int, int>> b;
    for(int i = 0; i < n; ++i) {
        int j = i, c = a[i].second;
        while(j + 1 < n && a[j + 1].first <= c) {
            ++j;
            c = max(a[j].second, c);
        }
        b.push_back(make_pair(a[i].first, c));
        i = j;
    }
    int ans1 = 0, ans2 = 0;
    for(int i = 0; i < b.size(); ++i) {
        ans1 = max(ans1, b[i].second - b[i].first);
        if (i != 0) {
            ans2 = max(b[i].first - b[i - 1].second, ans2);
        }
    }
    cout << ans1 << " " << ans2 << "\n";
}
