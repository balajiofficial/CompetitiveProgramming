#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	string d;
	bool ok = 0;
	for(int i = 0; i < a.size(); ++i) {
		if (a[i] == 'W' && a[i +1] == 'U' && a[i + 2] == 'B')
			i += 2, ok = 1;
		else {
			if (ok && !d.empty())
				d += ' ';
			ok = 0;
			d += a[i];
		}
	}
	cout << d << "\n";
}
