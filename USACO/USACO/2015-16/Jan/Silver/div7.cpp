#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("div7.out");
	ifstream cin ("div7.in");
	int n, ans = 0;
	cin >> n;
	int ps[50001], ind[7];
	memset(ps, 0, sizeof(ps));
	memset(ind, -1, sizeof(ind));
	for(int i = 1; i <= n; ++i) {
		int a;
		cin >> a;
		ps[i] = (ps[i - 1] + a) % 7;
		if (ind[ps[i]] == -1) ind[ps[i]] = i;
		else ans = max(ans, i - ind[ps[i]]);
	}
	cout << ans << "\n";
}
