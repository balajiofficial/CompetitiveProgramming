#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("blocks.out");
	ifstream cin ("blocks.in");
	int n;
	cin >> n;
	int a[26];
	memset(a, 0, sizeof(a));
	for(int i = 0; i < n; ++i) {
		string b, c;
		cin >> b >> c;
		int d = 0, e = 0;
		int x[26], y[26];
		memset(x, 0, sizeof(x));
		memset(y, 0, sizeof(y));
		for(int j = 0; j < b.size(); ++j) {
			x[b[j] - 'a']++;
		}
		for(int j = 0; j < c.size(); ++j) {
			y[c[j] - 'a']++;
		}
		for(int j = 0; j < 26; ++j) {
			a[j] += max(y[j], x[j]);
		}
	}
	for(int i = 0; i < 26; ++i) {
		cout << a[i] << "\n";
	}
}

