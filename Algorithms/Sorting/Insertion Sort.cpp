#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a;
	for(int i = 0, b; i < n; ++i) {
		cin >> b;
		a.push_back(b);
	}
	vector<int> c;
	for(int i = 0; i < n; ++i) {
		int ind = lower_bound(c.begin(), c.end(), a[i]) - c.begin();
		c.insert(c.begin()+ind, a[i]);
	}
	
	for(int i = 0; i < n; ++i) {
		cout << c[i] << " \n"[i == n - 1];
	}
}
