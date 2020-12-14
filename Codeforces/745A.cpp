#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	set<string> b;
	b.insert(a);
	for(int i = 0; i < a.size(); ++i) {
		string d;
		d += a[a.size() - 1];
		d += a;
		d.pop_back();
		a = d;
		b.insert(a);
	}
	cout << b.size() << "\n";
}
