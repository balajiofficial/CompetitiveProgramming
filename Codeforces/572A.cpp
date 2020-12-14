#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int na, nb;
	cin >> na >> nb;
	int k, m;
	cin >> k >> m;
	ll a[100000], b[100000];
	for(int i = 0; i < na; ++i) {
		cin >> a[i];
	}
	for(int i = 0; i < nb; ++i) {
		cin >> b[i];
	}
	sort(a, a+na);
	sort(b, b+nb,greater<int>());
	if (a[k - 1] >= b[m - 1])
		cout << "NO\n";
	else
		cout << "YES\n";
}
