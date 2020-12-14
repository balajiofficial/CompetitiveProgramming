#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	string a;
	cin >> a;
	ll ans =0;
	for(int i = 0; i < a.size();++i) {
		if (a[i] == '4' || a[i] == '7') {
			++ans;
		}
	}
	string b = to_string(ans);
	bool ok = 1;
	for(int i = 0; i < b.size(); ++i) {
		if (b[i] != '4' && b[i] != '7') {
			ok = 0;
			break;
		}
	}
	if (ok)
		cout << "YES\n";
	else
		cout << "NO\n";
}
