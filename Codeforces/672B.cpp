#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string a;
	cin >> a;
	if (a.size() > 26) {
		cout << -1 << "\n";
		return 0;
	}
	map<char, int> b;
	for(char c : a) {
		b[c]++;
	}
	int ans = 0;
	for(auto e : b) {
		ans += e.second - 1;
	}
	cout << ans << "\n";
}
