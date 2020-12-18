#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		string a;
		cin >> a;
		string d = a;
		reverse(d.begin(), d.end());
		cout << (d == a ? "wins" : "loses") << "\n";
	}
}
