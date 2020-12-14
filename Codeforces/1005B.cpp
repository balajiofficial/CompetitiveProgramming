#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	cin >> a >> b;
	int ans = 0, c = a.size() - 1, d = b.size() - 1;
	while(c >= 0 && d >= 0 && a[c] == b[d]) {
		++ans;
		--c, --d;
	}
	cout << a.size() + b.size() - 2 * ans << "\n";
}
