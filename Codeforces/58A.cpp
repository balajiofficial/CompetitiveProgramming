#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b = "hello";
	cin >> a;
	int c = 0;
	for(int i= 0 ;i < a.size(); ++i) {
		if (a[i] == b[c]) {
			++c;
		}
	}
	if (c == b.size()) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}
