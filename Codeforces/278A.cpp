#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int a[100];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int s, t;
	cin >> s >> t;
	if (s == t) {
		cout << "0\n";
		return 0;
	}
	int b = 0, c = 0;
	int d = abs(s -t);
	if (s >t)
		swap(s, t);
	for(int i = s -1; i < t - 1; ++i) {
		b += a[i];
	}
	for(int i = t- 1;; ++i) {
		if (i == n) {
			i = 0;
		}
		if (i == s-1) {
			break;
		}
		c += a[i];
	}
	cout << min(b, c) << "\n";
}
