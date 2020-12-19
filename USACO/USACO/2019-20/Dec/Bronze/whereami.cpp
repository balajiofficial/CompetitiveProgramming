#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("whereami.out");
	ifstream cin ("whereami.in");
	int n;
	cin >> n;
	string a;
	cin >> a;
	map<string, int> b;
	for(int i = 0; i < a.size(); ++i) {
		for(int j = 1; j <= a.size() - i; ++j) {
			++b[a.substr(i, j)];
		}
	}
	int ans = 0;
	for(auto e : b) {
		if (e.second > 1) {
			int sz = e.first.size();
			ans = max(ans, sz);
		}
	}
	cout << ans + 1 << "\n";
}
