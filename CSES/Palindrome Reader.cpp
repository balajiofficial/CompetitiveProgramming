#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int a[26];
    for (int i = 0; i < 26; i++) a[i] = 0;

    cin >> s;

    for (char c: s) {
        a[(c - 'A')]++;
    }
    
    int n = 0;
    for (int i: a) {
        if (i&1) n++;
    }
    
    if (n>1) {
        cout << "NO SOLUTION" << "\n";
        return 0;
    }

    string lh = "";
    string m = "";
    for (int i = 0; i < 26; i++) {
        while(a[i]) {
            if (a[i]&1) {
                m += (char)(i+'A');
                a[i] -= 1;
                continue;
            }
            lh += (char)(i + 'A');
            a[i] -= 2;
        }
    }

    string ans = lh + m;
    reverse(lh.begin(), lh.end());
    ans += lh;
    cout << ans << "\n";
}