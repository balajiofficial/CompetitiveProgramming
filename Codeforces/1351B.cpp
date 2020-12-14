#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if (a > b)
			swap(a, b);
		if (c >d)
			swap(c, d);
		if (b == d && a + c == d) {
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}
	}
}
