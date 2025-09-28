#include<bits/stdc++.h>

using namespace std;

#define ll long long

void print_bin(int v, int n) {
    string s = "";
    while(n--) {
        s += char((v&1) + '0');
        v >>= 1;
    }
    reverse(s.begin(), s.end());
    cout << s << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int v = 0;
    int m = 1 << n;
    while (v < m) {
        print_bin((v ^ (v >> 1)), n);
        v++;
    }
}