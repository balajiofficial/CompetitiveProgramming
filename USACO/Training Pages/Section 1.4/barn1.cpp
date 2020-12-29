/*
 ID: balajik2
 TASK: barn1
 LANG: C++14
 */

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ofstream cout ("barn1.out");
    ifstream cin ("barn1.in");
    int m, s, c;
    cin >> m >> s >> c;
    int a[200], low = INT_MAX, high = 0;
    for(int i = 0; i < c; ++i) {
        cin >> a[i];
        high = max(high, a[i]);
        low = min(low, a[i]);
    }
    sort(a, a+c);
    vector<int> b;
    for(int i = 1; i < c; ++i) {
        b.push_back(a[i] - a[i - 1] - 1); //appends the distance between two consecutive stalls to the vector
    }
    auto comp = [=](int a, int b) {
        return a > b;
    };
    sort(b.begin(), b.end(), comp);
    int ans = high - low + 1;
    int res = min((int)b.size(), m - 1);
    for(int i = 0; i < res; ++i) {
        ans -= b[i];
    }
	/*
	 * 			The distances are sorted in descending order and is subtracted from the distance between the first and the last stall.
	 * 			The more we subtract from the total distance the more minimum the answer becomes. This is why we sort the vector in descending
	 * 			order
	 */
    cout << ans << "\n";
}
