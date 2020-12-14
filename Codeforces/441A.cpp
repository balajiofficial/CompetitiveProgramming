#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, v, ans =0;
	cin >> n >> v;
	int a[50][50];
	vector<int> b;
	for(int i = 0; i < n; ++i) {
		int k;
		cin >> k;
		bool ok = 0;
		for(int j = 0; j < k; ++j) {
			cin >> a[i][j];
			if (v > a[i][j]) {
				ok = 1;
			}
		}
		if (ok) {
			++ans;
			b.push_back(i + 1);
		}
	}
	cout << ans << "\n";
	for(int i= 0;i < b.size(); ++i)
		cout << b[i] << " ";
	cout << "\n";
}
