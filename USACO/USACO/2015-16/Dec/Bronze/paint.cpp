#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ofstream cout ("paint.out");
    ifstream cin ("paint.in");
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (c < a) {
        if (d >= a && d <= b) {
            cout << b - c << "\n";
        } else if (d >= a && d >= b) {
            cout << d - c << "\n";
        } else if (d <= a) {
            cout << d - c + b - a << "\n";
        }
    } else {
        if (d <= b) {
            cout << b - a << "\n";
        } else if (c >= b) {
            cout << b - a  + d - c << "\n";
        } else if (d >= b) {
            cout << d - a << "\n";
        }
    }
}