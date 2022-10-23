#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++) {
			int c;
			cin >> c;
			a[i] = c;
		}
		bool some = true;
		sort(a.begin(), a.end());
		for(int i = 1; i < n; i++) {
			if (a[i]-a[i-1]==0) {
				cout << "NO\n";
				some = false;
				break;
			}
		}
		if (some)
			cout << "YES\n";
	}
}
