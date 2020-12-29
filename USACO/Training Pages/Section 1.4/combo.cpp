/*
 ID: balajik2
 TASK: combo
 LANG: C++14
 */

#include<bits/stdc++.h>

using namespace std;

#define ll long long

vector<int> a(3), b(3);
int ans = 0, n;

int sz(vector<int> c) {
    int temp = 0;
    for(int i : c) if (i != -1) ++temp;
    return temp;
}

bool cool(int c, int d) {
    if (abs(c - d) <= 2) return 1;
    if (d > c) {
        if (c - d + n <= 2) return 1;
    } else {
        if (d - c + n <= 2) return 1;
    }
    return 0;
}

bool ok1(vector<int> c) {
    for(int i = 0; i < 3; ++i) {
        if (cool(a[i], c[i]) == 0) return 0;
    }
    return 1;
}

bool ok2(vector<int> c) {
    for(int i = 0; i < 3; ++i) {
        if (cool(b[i], c[i]) == 0) return 0;
    }
    return 1;
}

void permute(vector<int> c) {
    int temp = sz(c);
    if (temp == 3) {
        if (ok1(c) || ok2(c)) {
            ++ans;
        }
    } else {
        for(int i = 1; i <= n; ++i) {
            c[temp] = i;
            permute(c);
        }
    }
}

int main() {
    ofstream cout ("combo.out");
    ifstream cin ("combo.in");
    cin >> n;
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];
    vector<int> c(3, -1);
    permute(c);
    cout << ans << "\n";
}
