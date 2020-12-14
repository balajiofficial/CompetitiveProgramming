#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	string a;
	cin >> a;
	for(int i = 0; i < a.size(); ++i) {
		int res = i;
		for(int j = i + 1; j <= min(i + k, n - 1); ++j) {
			if (a[j] == '.') {
				res = j;
			}
		}
		if (res == a.size() - 1) {
			cout << "YES\n";
			return 0;
		}
		if (res == i) {
			cout << "NO\n";
			return 0;
		} else {
			i = res - 1;
		}
	}
	cout << "YES\n";
}
