/*
 ID: balajik2
 TASK: dualpal
 LANG: C++14
 */

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n, s;

char to_char(int a) {
    if (a < 10) return (a + '0');
    else return (a - 10 + 'A');
}

string to(int a, int b) {
    string ans;
    while(a > 0) {
        ans = to_char(a % b) + ans;
        a /= b;
    }
    return ans;
}

bool pal(string a) {
    string b = a;
    reverse(b.begin(), b.end());
    return b == a;
}

int main() {
    ofstream cout ("dualpal.out");
    ifstream cin ("dualpal.in");
    cin >> n >> s;
    int ans = 0, i = s + 1;
    while(ans < n) {
        int temp = 0;
        for(int j = 2; j <= 10; ++j) {
            if (pal(to(i, j))) {
                ++temp;
                if (temp > 1) break;
            }
        }
        if (temp > 1) {
            cout << i << "\n";
            ++ans;
        }
        ++i;
    }
}