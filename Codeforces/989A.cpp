#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	bool ok = 0;
	for(int i = 1; i < a.size() - 1; ++i) {
		char b[3];
		b[0] = a[i - 1];
		b[1] = a[i];
		b[2] = a[i + 1];
		sort(b, b+3);
		if (b[0] == 'A' && b[1] == 'B' && b[2] == 'C') {
			ok = 1;
		}
	}
	if (ok) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
}
