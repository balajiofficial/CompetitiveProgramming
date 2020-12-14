#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int h = 0, m = 0;
	int n;
	cin >> n;
	int ans =0, temp = 0;
	for(int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		if (i != 0 && h == a && m == b) {
			++temp;
		} else {
			temp = 1;
		}
		h = a;
		m = b;
		ans = max(ans, temp);
	}
	cout << ans << "\n";
}
