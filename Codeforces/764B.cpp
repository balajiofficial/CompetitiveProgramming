#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll a[2000000];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for(int i = 0; i < n/2; ++i) {
		if (i % 2 == 0)
			swap(a[i], a[n - i - 1]);
	}
	for(int i= 0; i < n; ++i) {
		cout << a[i] << " ";
	}
	cout << "\n";
}
