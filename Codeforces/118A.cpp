#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	for(int i = 0; i < a.size(); ++i) {
		a[i] = (char)tolower(a[i]);
		if (a[i] == 'i' || a[i] == 'y' || a[i] == 'a' || a[i] == 'e' || a[i] == 'o' || a[i] == 'u') {
			a.erase(a.begin()+i);
			--i;
		}
	}
	string d;
	for(int i = 0; i < a.size(); ++i) {
		if (i != a.size()) {
			d += '.';
		}
		d += a[i];
	}
	cout << d << "\n";
}
