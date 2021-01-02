#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[200000];
	for(int i = 2; i <= n; ++i) {
		cin >> a[i];
	}
	int ind = n;
	vector<int> ans;
	ans.push_back(ind);
	while(1) {
		ans.push_back(a[ind]);
		ind = a[ind];
		if (ind == 1) break;
	}
	for(int i = ans.size() - 1; i >= 0; --i) cout << ans[i] << " ";
	cout << "\n";
}
