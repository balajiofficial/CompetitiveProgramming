#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a, b;
    cin >> a >> b;
    int temp = 1;
    map<char, int> c;
    for(char d : a) {
        c[d] = temp++;
    }
    int ans = 1;
    for(int i = 1; i < b.size(); ++i) {
        if (c[b[i]] <= c[b[i -1]]) ++ans;
    }
    cout << ans << "\n";
}