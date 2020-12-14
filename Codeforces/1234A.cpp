#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int q;
	cin >> q;
	while(q--) {
		int n;
		cin >> n;
		ll sum =0;
		for(int i = 0; i < n; ++i) {
			ll a;
			cin >> a;
			sum += a;
		}
		cout << sum/n + min((ll)1, sum % n) << "\n";
	}
}
