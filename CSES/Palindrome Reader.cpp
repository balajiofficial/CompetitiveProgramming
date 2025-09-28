#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int a[26];
    memset(a, 0, sizeof(a));

    for (char c : s) a[(c - 'A')]++;

    int n = 0;
    for (int i: a) n += i%2;

    if (n > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string l = "";
    string m = "";
    for (int i = 0; i < 26; i++) {
        while (a[i]) {
            if (a[i]&1) {
                m = char(i+'A');
                a[i] -= 1;
                continue;
            }
            l += char(i+'A');
            a[i] -= 2;
        }
    }
    string ans = l + m;
    reverse(l.begin(), l.end());
    ans += l;
    cout << ans << "\n";
}