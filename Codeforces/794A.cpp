#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	cin >>a  >> b >> c;
	int ans =0;
	int n;
	cin >> n;
	if (a < b) {
		c = b;
		b = 0;
	} else if (a > c) {
		b = c;
		c = n + 1;
	}
	for(int i =0; i <n; ++i) {
		int e;
		cin >> e;
		if (e >= b + 1 && e <= c - 1)
			++ans;
	}
	cout << ans << "\n";
}
