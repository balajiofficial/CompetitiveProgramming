#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n ;
	cin >> n;
	string a, d;
	cin >> a;
	int ans = 0;
	map<string, int> b;
	for(int i = 0; i < n - 1; ++i) {
		string c;
		c += a[i];
		c += a[i + 1];
		b[c] += 1;
	}
	for(auto m : b) {
		if (ans < m.second) {
			d = m.first;
			ans = m.second;
		}
	}
	cout << d << "\n";
}
