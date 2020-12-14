#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, m;
	cin >> n >> m;
	int a[1000], b[1000];
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	for(int i = 0; i < m; ++i)
		cin >> b[i];
	int c = 0;
	int ans =0;
	for(int i = 0; i < n; ++i) {
		if (b[c] >= a[i]) {
			++ans;
			++c;
		}
		if (c == m)
			break;
	}
	cout << ans << "\n";
}
