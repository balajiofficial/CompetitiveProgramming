#include<bits/stdc++.h>

using namespace std;

#define ll long long

int primediv(int n) {
	int ans = 0;
	for(int i = 2; i <= n; ++i) {
		if (n % i == 0) {
			bool ok = 1;
			for(int j = 2; j < i; ++j) {
				if (i % j == 0)
					ok = 0;
			}
			ans += ok;
		}
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>> n;
	int ans = 0;
	for(int i = 1; i <= n; ++i) {
		if (primediv(i) != 2) {
			++ans;
		}
	}
	cout << n - ans << "\n";
}
