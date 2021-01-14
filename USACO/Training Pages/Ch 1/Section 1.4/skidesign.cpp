/*
 ID: balajik2
 TASK: skidesign
 LANG: C++14
 */

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ofstream cout ("skidesign.out");
    ifstream cin ("skidesign.in");
    int n;
    cin >>  n;
    int a[1000];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    ll ans = LLONG_MAX;
    for(int i = 0; i <= 83; ++i) {
        ll temp = 0;
        for(int j = 0; j < n; ++j) {
            if (a[j] < i) {
                temp += pow(i - a[j], 2);
            } else if (a[j] > i + 17) {
                temp += pow(a[j] - i - 17, 2);
            }
        }
        ans = min(ans, temp);
    }
    cout << ans << "\n";
}
