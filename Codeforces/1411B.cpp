#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool fair(ll a) {
	string d = to_string(a);
	for(char c : d) {
		if (c != '0') {
			if (a % (c - '0') != 0) return 0;
		}
	}
	return 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll b;
		cin >> b;
		while(!fair(b)) {
			++b;
		}
		cout << b << "\n";
	}
}
