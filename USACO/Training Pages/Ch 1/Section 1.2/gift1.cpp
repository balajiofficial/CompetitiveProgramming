
/*
ID: balajik2
TASK: gift1
LANG: C++14
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("gift1.out");
	ifstream cin ("gift1.in");
	int n;
	cin >> n;
	map<string, int> a;
	vector<string> f;
	for(int i = 0; i < n; ++i) {
		string b;
		cin >> b;
		f.push_back(b);
		a[b] = 0;
	}
	for(int i = 0; i <n; ++i) {
		string b;
		cin >> b;
		int c, d;
		cin >> c >> d;
		if (d == 0) continue;
		for(int i = 0; i < d; ++i) {
			string e;
			cin >> e;
			a[e] += c/d;
		}
		a[b] -= c - c %d;
	}
	for(int i= 0; i < n; ++i) {
		for(auto e : a) {
			if (f[i] == e.first) {
				cout << e.first << " " << e.second << "\n";
				break;
			}
		}
	}
}
