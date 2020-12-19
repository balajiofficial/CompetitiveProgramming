#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("notlast.out");
	ifstream cin ("notlast.in");
	int n;
	cin >> n;
	map<string, int> a;
	for(int i =0; i < n; ++i) {
		string b;
		int c;
		cin >> b >> c;
		a[b] += c;
	}
	a["Bessie"] = max(a["Bessie"], 0);
	a["Elsie"] = max(a["Elsie"], 0);
	a["Daisy"] = max(a["Daisy"], 0);
	a["Gertie"] = max(a["Gertie"], 0);
	a["Annabelle"] = max(a["Annabelle"], 0);
	a["Maggie"] = max(a["Maggie"], 0);
	a["Henrietta"] = max(a["Henrietta"], 0);
	int c = INT_MAX, c2 = INT_MAX;
	map<int, string> b;
	for(auto e : a) {
		b[e.second] = e.first;
	}
	for(auto e: a) {
		if (e.second < c) {
			c2 = c;
			c = e.second;
		} else if (e.second < c2 && e.second != c) {
			c2 = e.second;
		}
	}
	string ans = "Tie";
	for(auto e: a) {
		if (e.second == c2) {
			if (ans != "Tie") {
				cout << "Tie\n";
				return 0;
			} else {
				ans = e.first;
			}
		}
	}
	cout << ans << "\n";
}