#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	map<int, int> a;
	for(int i = 0; i < n;++i) {
		int b;
		cin >> b ;
		a[b] += 1;
	}
	int ans = 0;
	for(auto e : a) {
		ans = max(ans, e.second);
	}
	cout << ans << " " << a.size() << "\n";
}
