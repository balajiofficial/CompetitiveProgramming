#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	int k, b[26];
	cin >> k;
	int high = 0;
	for(int i = 0; i < 26; ++i) {
		cin >> b[i];
		high = max(b[i], high);
	}
	int ans = 0;
	for(int i = 0; i < a.size(); ++i) {
		ans += b[a[i] - 'a'] * (i + 1);
	}
	for(int i = a.size(); i < a.size() + k; ++i) {
		ans += high * (i + 1);
	}
	cout << ans << "\n";
}
