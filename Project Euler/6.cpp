#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s1 = 0, s2 = 0;
    for (int i = 1; i <= 100; i++) {
        s1 += i*i;
        s2 += i;
    }
    cout << s2*s2 - s1 << "\n";
}
