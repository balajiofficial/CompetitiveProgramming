#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)  {
		int n;
		cin >> n;
		const int mxN =	5e4;
		int a[mxN];
		bool ok = 0;
		for(int i = 0;i < n; ++i) {
			cin >> a[i];
			if (i > 0 && a[i] >= a[i - 1])
				ok = 1;
		}
		if (ok)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
