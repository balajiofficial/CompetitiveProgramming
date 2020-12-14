#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int p, n;
	cin >> p >> n;
	set<ll> a;
	for(int i= 0;i < n; ++i) {
		int b;
		cin >> b;
		a.insert(b % p);
		if (a.size() < i + 1) {
			cout << i + 1 << "\n";
			return 0;
		}
	}
	cout << "-1\n";
}
