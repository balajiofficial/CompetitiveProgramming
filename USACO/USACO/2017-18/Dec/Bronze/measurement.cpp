#include<bits/stdc++.h>

using namespace std;

#define ll long long


struct cow {
	string name;
	int amt;
};

int main() {
	ofstream cout ("measurement.out");
	ifstream cin ("measurement.in");
	int n;
	cin >> n;
	cow a[3];
	a[0] = {"Bessie", 7};
	a[1] = {"Elsie", 7};
	a[2] = {"Mildred", 7};
	map<int, pair<string, int>> s;
	for(int i = 0; i < n; ++i) {
		string b;
		int c, d;
		cin >> c >> b >> d;
		s[c] = make_pair(b, d);
	}
	int fin = 0;
	bool z[3];
	memset(z, 0, sizeof(z));
	for(auto e : s) {
		string l = e.second.first;
		int num = e.second.second;
		int high = 0;
		for(int i = 0; i < 3; ++i) {
			if (l == a[i].name) {
				a[i].amt += num;
			}
			high = max(high, a[i].amt);
		}
		bool ok = 0;
		bool res[3];
		memset(res, 0, sizeof(res));
		for(int i=0; i < 3; ++i) {
			if (a[i].amt == high) {
				res[i] = 1;
			} else {
				res[i] = 0;
			}
		}
		for(int i =0; i < 3; ++i) {
			if (z[i] != res[i]) {
				ok = 1;
				z[i] = res[i];
			}
		}
		fin += ok;
	}
	cout << fin << "\n";
}
