#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, d;
	cin >> n >> d;
	int a[1000];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int ans =0;
	for(int i = 0; i < n; ++i) {
		for(int j = i + 1; j < n; ++j) {
			if (abs(a[j] - a[i]) <= d)
				++ans;
		}
	}
	cout << ans * 2<< "\n";
}
