#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, low = INT_MAX;
	cin >> n;
	int a[100000];
	for(int i = 0; i < n;++i) {
		cin >> a[i];
		low = min(low,a[i]);
	}
	int ans = 0, c = 0;
	for(int i= 0; i < n; ++i) {
		if (a[i] == low) {
			++ans;
			c = i + 1;
		}
	}
	if (ans == 1) {
		cout << c << "\n";
	} else {
		cout << "Still Rozdil\n";
	}
}
