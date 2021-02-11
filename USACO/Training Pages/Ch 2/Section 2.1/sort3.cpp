/*
ID: balajik2
TASK: sort3
LANG: C++14
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
	ofstream cout ("sort3.out");
	ifstream cin ("sort3.in");
	int n;
	cin >> n;
	int a[1000], b[1000];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b+n);
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		for(int j = i + 1; j < n; ++j) {
			if (a[i] != b[i] && a[j] != b[j] && a[i] == b[j] && a[j] == b[i]) {
				a[i] = b[i];
				a[j] = b[j];
				++ans;
			}
		}
	}
	int res = 0;
	for(int i = 0; i < n; ++i) {
		if (a[i] != b[i]) {
			++res;
		}
	}
	res /= 3;
	ans += res * 2;
	cout << ans << "\n";
}
