/*
 ID: balajik2
 TASK: crypt1
 LANG: C++14
 */

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int ans = 0;

vector<int> a;

bool ok(int n) {
    while(n) {
        bool ok = false;
        for(int i : a) {
            if (i == n % 10) ok = true;
        }
        if (ok == 0) return false;
        n /= 10;
    }
    return true;
}

int sz(const vector<int>& b) {
    int fin = 0;
    for(int i : b) if (i != -1) ++fin;
    return fin;
}

void permute(vector<int> b) {
    int temp = sz(b);
    if (temp == 5) {
        int c = b[0] * 100 + b[1] * 10 + b[2];
        int d = c * b[3], e = c * b[4];
        if (to_string(d).size() == 3 && to_string(e).size() == 3 && ok(d) && ok(e) && ok(e * 10 + d)) ++ans;
    } else {
        for(int i : a) {
            b[temp] = i;
            permute(b);
            b[temp] = -1;
        }
    }
}

int main() {
    ofstream cout ("crypt1.out");
    ifstream cin("crypt1.in");
    int n;
    cin >> n;
    for(int i = 0, b; i < n; ++i) {
        cin >> b;
        a.push_back(b);
    }
    vector<int> b(5, -1);
    permute(b);
    cout << ans << "\n";
}
