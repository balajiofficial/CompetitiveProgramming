#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int ans = -1;
		vector<int> a(n);
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
			if (ans == -1) {
				ans = a[i];
			} else {
				ans = __gcd(a[i], ans);
			}
		}
		for(int i= 0; i < n; ++i) {
			cout << a[i]/ans << " ";
		}
		cout << "\n";
	}
}
