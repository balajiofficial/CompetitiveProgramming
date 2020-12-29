#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int c = 0, d = 0;
        for(int i= 0; i<  n; ++i) {
            if (a[i] > b[i]) {
                ++c;
            } else if (a[i] < b[i]) {
                ++d;
            }
        }
        if (c == d) {
            cout << "EQUAL\n";
        } else if (c > d) {
            cout << "RED\n";
        } else {
            cout << "BLUE\n";
        }
    }
}
