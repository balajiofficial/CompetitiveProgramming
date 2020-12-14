#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin >> k;
	int a[12];
	for(int i = 0; i < 12; ++i) {
		cin >> a[i];
	}
	sort(a, a+12, greater<int>());
	int ans = 0;
	for(int i = 0; i < 12; ++i) {
		if (k <= 0) {
			break;
		}
		k -= a[i];
		++ans;
	}
	if (k <= 0)
		cout<< ans << "\n";
	else
		cout << -1 << "\n";
}
