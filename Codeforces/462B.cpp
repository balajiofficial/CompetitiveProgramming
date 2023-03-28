#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int len = 1e5;
int a[len];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, k, ans = 0;
	cin >> n >> k;
	string s;
	cin >> s;
	for (int i = 0; i < (int)s.size(); i++) {
		a[s[i]-'A']++;
	}
	sort(a, a+26, greater<int>());
	for (int i = 0; i < 26; i++) {
		ll temp = min(a[i], (int)k);
		k -= temp;
		ans += temp*temp;
	}
	cout << ans << "\n";
}

