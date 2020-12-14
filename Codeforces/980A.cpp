#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	int p = 0;
	for(int i = 0; i < a.size(); ++i) {
		if (a[i] != '-') {
			++p;
		}
	}
	if (p == 0) {
		cout << "YES\n";
		return 0;
	}
	if ((a.size() - p) % p == 0) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}	
