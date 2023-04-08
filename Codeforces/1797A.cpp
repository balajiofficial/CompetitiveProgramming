#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int x, y, x2, y2;
		cin >> x >> y >> x2 >> y2;
		int ans1 = 2, ans2 = 2;
		ans1 += x!=1&&x!=n;
		ans1 += y!=1&&y!=m;
		ans2 += x2!=1&&x2!=n;
		ans2 += y2!=1&&y2!=m;
		cout << min(ans1, ans2) << "\n";
	}
}

