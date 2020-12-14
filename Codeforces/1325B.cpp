#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin>> n;
		string a;
		for(int i = 0; i < n; ++i) {
			char b;
			cin >> b;
			a += b;
		}
		int ans =0;
		sort(a.begin(), a.end());
		for(int i =0; i < n; ++i) {
			if (a[i] != a[i - 1]) {
				++ans;
			}
		}
		cout << ans << "\n";
	}
}
