#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	string d = a;
	reverse(d.begin(), d.end());
	bool ok = 0;
	for(int i = 0; i < a.size() - 1; ++i) {
		if (a[i] != a[i +1]) {
			ok = 1;
			break;
		}
	}
	if (ok) {
		if (d == a) {
			cout << a.size() - 1 << "\n";
		} else {
			cout << a.size() << "\n";
		}
	} else  {
		cout << 0 << "\n";
	}
}
