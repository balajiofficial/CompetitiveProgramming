#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<string> s_set;
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    do {
        s_set.insert(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << s_set.size() << "\n";
    for (string a : s_set) {
        cout << a << "\n";
    }
}