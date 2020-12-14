#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		string a;
		cin >> a;
		int num = a[0] - '0';
		int ans = (num - 1) * 10;
		ans += (a.size() * (a.size() +1))/2;
		cout << ans << "\n";
	}
}
