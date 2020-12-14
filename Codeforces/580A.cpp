#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[100000];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int ans = 0, ind = 0;
	for(int i = 0; i <n; ++i) {
		ind = max(ind, i);
		while(ind + 1 < n && a[ind + 1] >= a[ind])
			++ind;
		ans = max(ans, ind - i + 1);
	}
	cout << ans << "\n";
}
