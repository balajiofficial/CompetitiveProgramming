#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	bool ok = 0;
	for(int i = 0; i < a.size(); ++i) {
		if (a[i] == 'H' || a[i] == 'Q' || a[i] == '9')
			ok = 1;
	}
	if (ok)
		cout << "YES\n";
	else
		cout<< "NO\n";
}
