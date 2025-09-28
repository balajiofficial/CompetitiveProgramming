#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int o = 1;
    int e = 2;

    if (n == 1) {
        cout << "1\n";
        return 0;
    }

    if (n < 4) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    if (n == 4) {
        cout << "3 1 4 2\n";
        return 0;
    }

    while(o <= n) {
        cout << o << " ";
        o += 2;
    }

    while (e <= n) {
        cout << e << " ";
        e += 2;
    }
    cout << "\n";
}