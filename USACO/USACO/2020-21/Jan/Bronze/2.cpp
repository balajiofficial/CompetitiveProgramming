#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, odd = 0, even = 0;
    cin >> n;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        if (a % 2) odd++;
        else even++;
    }
    int ans = 0;
    for(int i = 0;; ++i) {
        if (i % 2) {
            if (odd == 0) {
                break;
            } else {
                --odd;
            }
        } else {
            if (even == 0) {
                if (odd >= 2) {
                    odd -= 2;
                } else {
                    if (odd == 0) {
                        break;
                    }
                    odd++;
                    break;
                }
            } else {
                even--;
            }
        }
        ans++;
    }
    if (odd == 0 && even == 0) {
        cout << ans << "\n";
    } else if (odd > 0) {
        if (odd == 2) {
            cout << ans - 1 << "\n";
        } else {
            cout << ans - 2 << "\n";
        }   
    } else {
        cout << ans << "\n";
    }
}