#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s1, s2;
	cin >> s1 >> s2;
	vector<pair<char,char>> a;
	if (s1.size()!=s2.size()) {
		cout << "NO\n";
		return 0;
	}
	for (int i = 0; i < (int)s1.size(); i++) {
		if (s1[i]!=s2[i]) {
			a.push_back(make_pair(s1[i], s2[i]));
		}
	}
	if (a.size()==2) {
		if (a[0].first == a[1].second && a[0].second==a[1].first) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	} else {
		cout << "NO\n";
	}
}

