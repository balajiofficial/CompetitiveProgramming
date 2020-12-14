#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	cin >> a >> b;
	if (a.size() != b.size()) {
		cout << "NO\n";
		return 0;
	}
	bool ok = 0;
	for(int i = 0; i < a.size(); ++i) {
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
			if (b[i] != 'a' && b[i] != 'e' && b[i] != 'i' && b[i] != 'o' && b[i] != 'u') {
				ok = 1;
			}
		}
		swap(a[i], b[i]);
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
			if (b[i] != 'a' && b[i] != 'e' && b[i] != 'i' && b[i] != 'o' && b[i] != 'u') {
				ok = 1;
			}
		}
		swap(a[i], b[i]);
	}
	if(!ok) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}
