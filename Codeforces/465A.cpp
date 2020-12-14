#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string a;
	cin >> a;
	int ans = 0;
	int i = 0;
	while(a[i] == '1') {
		++i;
		++ans;
	}
	if (ans == n) {
		cout << ans << "\n";
	} else {
		cout << ans + 1 << "\n";
	}
}
