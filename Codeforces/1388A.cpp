#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		if (n <= 30) {
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
		cout << 6 << " " << 10 << " " << 14 << " " << n - 30 << "\n";
	}
}
