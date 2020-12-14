#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[30], b[30];
		for(int i =0; i<n; ++i) {
			cin >> a[i];
		}
		for(int i = 0; i<n; ++i) {
			cin >>b[i];
		}
		sort(a, a+n);
		sort(b, b+n, greater<int>());
		int sum =0, c= 0;
		for(int i = 0; i < n && c < n; ++i) {
			if (k > 0) {
				if (a[i] >= b[i])
					sum += a[i];
				else {
					sum += b[c];
					++c;
					--k;
				}
			} else {
				sum += a[i];
			}
		}
		cout << sum << "\n";
	}
}
