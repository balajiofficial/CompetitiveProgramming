#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 2520;
    while (true) {
        bool z = true;
        for (int i = 2; i <= 20; i++) {
            if (n%i!=0) {
                n++;
                z = false;
                break;
            }
        }
        if (z) break;
    }
    cout << n << "\n";
}
