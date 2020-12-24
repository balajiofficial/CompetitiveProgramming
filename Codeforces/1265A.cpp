#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string a;
        cin >> a;
        int n = a.size();
        bool ok = 1;
        for(int i = 0; i < n; ++i) {
            if (a[i] == '?') {
                if(i > 0 && i < n - 1) {
                    if (a[i - 1] == 'a' || a[i + 1] == 'a') {
                        if (a[i - 1] == 'a') {
                            a[i] = (a[i + 1] == 'b' ? 'c' : 'b');
                        } else {
                            a[i] = (a[i - 1] == 'c' ? 'b' : 'c');
                        }
                    } else {
                        a[i] = 'a';
                    }
                } else {
                    if (i == 0) {
                        if (n > 0 && a[i + 1] == 'a') {
                            a[i] = 'b';
                        } else {
                            a[i] = 'a';
                        }
                    } else {
                        if (a[i - 1] == 'a') {
                            a[i] = 'b';
                        } else {
                            a[i] = 'a';
                        }
                    }
                }
            } else {
                if (i  < n - 1  && a[i] == a[i + 1]) {
                    ok = 0;
                    break;
                }
            }
        }
        if (ok) {
            cout << a << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
}
