#include<bits/stdc++.h>
using namespace std;

set<int> s;

bool prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int count = 0, n = 1;
    while (count < 10001) {
        n++;
        if (prime(n)) {
            count++;
        }
    }
    cout << n << "\n";
}
