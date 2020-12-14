#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int odd =0;
		for(int i = 0; i <n; ++i) {
			int a;
			cin>> a;
			if (a % 2)
				++odd;
		}
		if (odd == n) {
			if (n % 2 == 0) {
				cout << "NO\n";
			} else {
				cout << "YES\n";
			}
			continue;
		}
		if (odd == 0)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}
