/*
ID: balajik2
LANG: C++14
TASK: transform
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n;
char a[10][10], b[10][10];

bool c6() {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if (a[i][j] != b[i][j]) return 0;
        }
    }
    return 1;
}

void re() {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n/2; ++j) {
            swap(a[i][j], a[i][n - 1 - j]);
        }
    }
}

void c1() {
    for(int i = 0; i < n/2; ++i) {
        for(int j = i; j < n - 1 - i; ++j) {
            int temp = a[i][j];
            a[i][j] = a[n - 1 - j][i];
            a[n - 1 - j][i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n - 1 - j] = a[j][n - 1 - i];
            a[j][n - 1 - i] = temp;
        }
    }
}

bool c5() {
    c1();
    if (c6()) return 1;
    c1();
    if (c6()) return 1;
    c1();
    if (c6()) return 1;
    return 0;
}

int main() {
    ofstream cout ("transform.out");
    ifstream cin ("transform.in");
    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j <n; ++j) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j <n; ++j) {
            cin >> b[i][j];
        }
    }
    int ans = 7;
    if (c6()) ans = 6;
    c1();
    if (c6()) ans = min(ans, 1);
    c1();
    if (c6()) ans = min(ans, 2);
    c1();
    if (c6()) ans = min(ans, 3);
    c1();
    re();
    if (c6()) ans = min(ans, 4);
    if (c5()) ans = min(ans, 5);
    cout << ans << "\n";
}
