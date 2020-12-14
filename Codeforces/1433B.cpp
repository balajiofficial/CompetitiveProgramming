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
		int a[50];
		int b = -1, c = 0;
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
			if (a[i] == 1 && b == -1)
				b = i;
			if (a[i] == 1)
				c = i;
		}
		int ans = 0;
		for(int i = b; i <= c; ++i) {
			if (a[i] ==0)
				++ans;
		}
		cout << ans << "\n";
	}
}
