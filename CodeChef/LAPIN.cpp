#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >>  t;
	while(t--) {
		string a;
		cin >> a;
		string b = a.substr(0, a.size()/2);
		string c = a.substr((a.size() + 1)/2, a.size()/2);
		sort(b.begin(), b.end());
		sort(c.begin(), c.end());
		if (b == c) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
