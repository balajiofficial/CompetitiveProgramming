/*
ID: balajik2
TASK: hamming
LANG: C++14
*/

#include<bits/stdc++.h>

using namespace std;

int ham(int a, int b) {
	return __builtin_popcount(a ^ b);
}

int main() {
	ofstream cout ("hamming.out");
	ifstream cin ("hamming.in");
	int n, b, d, res = 0;
	cin >> n >> b >> d;
	vector<int> ans;
	while((int)ans.size() != n) {
		bool ok = 1;
		for(int a : ans) {
			if (ham(a, res) < d) {
				ok = 0;
				break;
			}
		}
		if (ok) ans.push_back(res);
		res++;
	}
	for(int i = 0; i < n; ++i) {
		if (i % 10) cout << " ";
		cout << ans[i];
		if (i == n - 1 || i % 10 == 9) cout << "\n";
	}
}
