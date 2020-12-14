#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	string b, c;
	bool ok = 0;
	for(int i = 0; i < a.size(); ++i) {
		if (a[i] == '.')
			ok = 1;
		else {
			if (ok == 0)
				b += a[i];
			else
				c += a[i];
		}
	}
	if (b[b.size() - 1] == '9') {
		cout << "GOTO Vasilisa.\n";
	} else {
		if (c[0] < '5') {
			cout << b << "\n";
		} else {
			for(int i = 0; i <b.size() - 1; ++i) 
				cout << b[i];
			cout << (char)((int)b[b.size() - 1] + 1) << "\n";
		}
	}
}
