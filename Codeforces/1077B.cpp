#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	bool a[100];
	for(int i =0; i <n; ++i) {
		cin >> a[i];
	}
	int ans = 0;
	for(int i =1; i < n - 1; ++i) {
		if (!a[i]&&a[i-1]&&a[i+1]) a[i+1]=0,++ans;
	}
	cout << ans << "\n";
}
