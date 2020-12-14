#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll n;
	cin >> n;
	int ans =0;
	for(int i = 5;i > 0; --i) {
		if (n >= i) {
			ans += n/i;
			n -= n/i *i;
		}
	}
	cout << ans << "\n";
}
