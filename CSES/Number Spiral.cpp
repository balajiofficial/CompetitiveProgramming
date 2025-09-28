#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        ll y, x;
        cin >> y >> x;
        
        if (y >= x) {
            if (y%2==0) {
                cout << y*y - (x - 1) << "\n";
            } else {
                cout << (y-1)*(y-1) + x << "\n";
            }
        } else {
            if (x%2==1) {
                cout << x*x - (y-1) << "\n";
            } else {
                cout << (x-1)*(x-1) + y << "\n";
            }
        }
    }
}