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
		string a;
		cin >> a;
		if (n == 2 && a[0] >= a[1])
			cout << "NO\n";
		else {
			cout << "YES\n";
			cout << 2 << "\n";
			cout << a[0] << " " << a.substr(1, a.size() - 1) << "\n";
		}
	}
}
