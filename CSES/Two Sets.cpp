#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	if ((n * (n + 1))/2 % 2) {
		cout << "NO\n";
		return 0;
	}
	cout << "YES\n";
	ll sum = (n * (n + 1))/2;
	sum /= 2;
	vector<ll> a(n), ans;
	iota(a.begin(), a.end(), 1);
	reverse(a.begin(), a.end());
	for(int i = 0; i < n; ++i) {
		if (sum >= a[i]) {
			sum -= a[i];
			ans.push_back(a[i]);
			a[i] = -1;
		}
	}
	cout << ans.size() << "\n";
	for(int i : ans) cout << i << " ";
	cout << "\n";
	cout << n - ans.size() << "\n";
	for(int i : a) if (i != -1) cout << i << " ";
	cout << "\n";
}