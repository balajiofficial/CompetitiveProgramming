#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	int n;
	cin >> n;
	string b[1000];
	for(int i = 0; i < n; ++i) {
		cin >> b[i];
		if (b[i] == a) {
			cout << "YES\n";
			return 0;
		}
		string d = b[i];
		reverse(d.begin(), d.end());
		if (d == a) {
			cout << "YES\n";
			return 0;
		}
	}
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			string d;
			d += b[i] + b[j]; 
			for(int l = 0; l < d.size() - 1; ++l) {
				if (d[l] == a[0] && d[l + 1] == a[1]) {
					cout << "YES\n";
					return 0;
				}
			}
		}
	}
	cout << "NO\n";
}
