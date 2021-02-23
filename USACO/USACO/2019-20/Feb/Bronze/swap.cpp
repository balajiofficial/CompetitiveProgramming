#include<bits/stdc++.h>

using namespace std;

int main() {
    ofstream cout ("swap.out");
    ifstream cin ("swap.in");
    int n, k, a1, a2, b1, b2;
    cin >> n >> k >> a1 >> a2 >> b1 >> b2;
    vector<int> a(n + 1), b(n + 1);
    for(int i = 1; i <= n; ++i) {
        a[i] = i;
        b[i] = i;
    }
    int res = 0;
    do {
        reverse(a.begin() + a1, a.begin() + a2 + 1);
        reverse(a.begin() + b1, a.begin() + b2 + 1);
        res++;
    } while(a != b);
    res = k % res;
    while(res--) {
        reverse(a.begin() + a1, a.begin() + a2 + 1);
        reverse(a.begin() + b1, a.begin() + b2 + 1);
    }
    for(int i = 1; i <= n; ++i) {
        cout << a[i] << "\n";
    }
}