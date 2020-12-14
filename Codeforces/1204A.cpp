#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	ll ans = 0;
	for(char c : a) {
		ans += c - '0';
	}
	if (ans == 0) cout << 0 << "\n";
	else if (ans == 1) cout << a.size()/2 << "\n";
	else cout << (a.size() + 1)/2 << "\n";
}

