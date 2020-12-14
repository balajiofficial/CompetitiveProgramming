#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	cin >> a >> b;
	vector<string> ans;
	while(1) {
		string s;
		int x = b[0] - a[0];
		int y = b[1] - a[1];
		x = (x > 0) - (x < 0);
		y = (y > 0) - (y < 0);
		if (x < 0) s += 'L';
		if (x > 0) s += 'R';
		if (y < 0) s += 'D';
		if (y > 0) s += 'U';
		if (s.size() == 0) break;
		ans.push_back(s);
		b[0] -= x;
		b[1] -= y;
	}
	cout << ans.size() << "\n";
	for(string e : ans) {
		cout << e << "\n";
	}
}
