#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, c;
	cin >> n >> c;
	map<pair<char, int>, int> f;
	for(int i = 0; i < n; ++i) {
		char e;
		int d, m;
		cin >> e >> d >> m;
		f[make_pair(e, d)] += m;
	}
	vector<pair<int, int>> a, b;
	for(auto e : f) {
		if (e.first.first == 'S') {
			a.push_back(make_pair(e.first.second, e.second));
		} else {
			b.push_back(make_pair(e.first.second, e.second));
		}
	}
	auto comp1 = [=](pair<int, int> k, pair<int, int> l) {
		return k.first < l.first;
	};
	auto comp2 = [=](pair<int, int> k, pair<int, int> l) {
		return k.first > l.first;
	};
	sort(a.begin(), a.end(), comp1);
	sort(b.begin(), b.end(), comp2);
	int r = min(int(a.size()), c);
	sort(a.begin(), a.begin()+r, comp2);
	for(int i = 0; i < min((int)a.size(), c); ++i) {
		cout << 'S' << " " << a[i].first << " " << a[i].second << "\n";
	}
	for(int i = 0; i < min((int)b.size(), c); ++i) {
		cout << 'B' << " " << b[i].first << " " << b[i].second << "\n";
	}
}
