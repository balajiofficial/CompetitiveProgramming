#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll a[200000];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	ll sum = 0;
	for(int i = 0;i < n;++i) {
		if (a[i] < 0) {
			cout << sum + a[i] << " ";
		} else {
			cout << sum + a[i] << " ";
			sum += a[i];
		}
	}
	cout << "\n";
}
