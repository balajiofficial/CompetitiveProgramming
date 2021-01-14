
/*
ID: balajik2
LANG: C++14
TASK: beads
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    ofstream cout ("beads.out");
    ifstream cin ("beads.in");
    int n;
    cin >> n;
    string a;
    cin >> a;
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        int b = i, c = i + 1;
        char d = '!';
        while(1) {
            if (d=='!'&&a[c % n] != 'w') {
                d = a[c % n];
            } else if (d != '!' && a[c %n] != d && a[c % n] != 'w') {
                break;
            }
            ++c;
            if (c - i >= n) break;
        }
        d = '!';
        while(1) {
            if (d == '!'&&a[(b + n) % n] != 'w') {
                d = a[(b + n) % n];
            } else if (d != '!' && a[(b + n) % n] != 'w' && a[(b + n) % n] != d) {
                break;
            }
            --b;
            if (i - b >= n)
                break;
        }
        ans = max(ans, c - b - 1);
    }
    cout << min(ans, n) << "\n";
}
