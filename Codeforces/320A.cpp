#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	bool ok = 1;
	for(int i = 0;i < a.size(); ++i) {
		if (a[i] == '1' || (a[i] == '4' && a[i - 1] == '1') || (a[i] == '4' && a[i -1] == '4' && a[i - 2] == '1'))
			ok = ok;
		else
			ok = 0;
	}
	if (ok)
		cout << "YES\n";
	else
		cout << "NO\n";
}
