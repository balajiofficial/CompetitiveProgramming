#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	string a;
	cin >> a;
	bool ok = 0;
	for(int i = 0; i < 5; ++i) {
		string b;
		cin >> b;
		if (b[0] == a[0] || b[1] == a[1])
			ok = 1;
	}
	if (ok)
		cout << "YES\n";
	else
		cout << "NO\n";
}
