/*
ID: balajik2
TASK: frac1
LANG: C++14
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ofstream cout ("frac1.out");
	ifstream cin ("frac1.in");
	int n;
	cin >> n;
	pair<int, int> a[8000];
	int c = 0;
	for(int i = 1; i <= n; ++i) {
		for(int j = 0; j <= i; ++j) {
			if (__gcd(j, i) == 1) {
				a[c++] = {j, i};
			}
		}
	}
	auto comp = [](pair<int, int> a, pair<int, int> b) {
		double c = double(a.first)/double(a.second);
		double d = double(b.first)/double(b.second);
		return c < d;
	};
	sort(a, a+c, comp);
	for(int i = 0; i < c; ++i) {
		cout << a[i].first << "/" << a[i].second << "\n";
	}
}
