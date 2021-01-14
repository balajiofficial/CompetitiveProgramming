/*
 ID: balajik2
 TASK: palsquare
 LANG: C++14
 */

#include<bits/stdc++.h>

using namespace std;

#define ll long long

char to_char(int n) {
    if (n < 10) return (n + '0');
    else return (n - 10 + 'A');
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
    string d = a;
    reverse(a.begin(), a.end());
    return d == a;
}

int main() {
    ofstream cout ("palsquare.out");
    ifstream cin ("palsquare.in");
    int n;
    cin >> n;
    for(int i = 1; i <= 300; ++i) {
        string a = to(i * i, n), b = to(i, n);
        if (pal(a)) {
            cout << b << " " << a << "\n";
        }
    }
}