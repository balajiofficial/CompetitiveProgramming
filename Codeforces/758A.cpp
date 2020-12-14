#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll n;
	cin >> n;
	ll high =0, a[100];
	for(int i =0; i < n; ++i) {
		cin >> a[i];
		high = max(high, a[i]);
	}
	ll sum =0;
	for(int i =0; i < n; ++i) {
		sum += high - a[i];
	}
	cout << sum << "\n";
}
