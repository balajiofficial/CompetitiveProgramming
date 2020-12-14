#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int a[100], b[100];
	for(int i = 0; i < n; ++i)
		cin >>a[i];
	for(int i = 0; i < k; ++i)
		cin >> b[i];
	sort(b, b+k, greater<int>());
	int c = 0;
	bool ok = 0;
	for(int i = 0; i < n; ++i) {
		if (a[i] == 0) {
			a[i] = b[c++];
		}
		if (i > 0 && a[i] <= a[i - 1]) {
			ok = 1;
			break;
		}
	}
	if (ok) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
}
