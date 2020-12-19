#include<bits/stdc++.h>

using namespace std;

#define ll long long

vector<string> a[100];

int com(int b, int c) {
	int ans = 0;
	for(string i : a[b]) {
		for(string j : a[c]) {
			if (i == j) ++ans;
		}
	}
	return ans;
}

int main() {
	ofstream cout ("guess.out");
	ifstream cin ("guess.in");
	int n;
	cin >> n;
	for(int i =0; i < n; ++i) {
		string b;
		cin >> b;
		int k;
		cin >> k;
		for(int j = 0; j < k; ++j) {
			string c;
			cin >> c;
			a[i].push_back(c);
		}
	}
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		for(int j = i + 1; j < n; ++j) {
			ans = max(ans, com(i, j));
		}
	}
	cout << ans + 1 << "\n";
}
