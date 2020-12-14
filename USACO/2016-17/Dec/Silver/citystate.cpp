#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("citystate.out");
	ifstream cin ("citystate.in");
	int n, ans = 0;
	cin >> n;
	map<string, int> a;
	for(int i = 0; i < n; ++i) {
		string b, c;
		cin >> b >> c;
		b = b.substr(0, 2);
		if (b != c) {
			ans += a[c+b];
		}
		a[b+c]++;
	}
	cout << ans << "\n";
}