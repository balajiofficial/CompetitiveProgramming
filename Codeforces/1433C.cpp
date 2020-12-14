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
		int a[300000], high = 0;
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
			high =max(high, a[i]);	
		}
		int ans = -1;
		for(int i = 0;i < n; ++i ){
			if (a[i] != high)
				continue;
			if (i > 0 && a[i - 1] != high)
				ans = i + 1;
			if (i < n - 1 && a[i + 1] != high)
				ans = i + 1;
		}
		cout << ans << "\n";
	}
}
