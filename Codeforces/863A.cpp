#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	while(a.back() == '0') {
		a.pop_back();
	}
	string d = a;
	reverse(d.begin(), d.end());
	if (d == a) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}
