#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[100];
	for(int i = 0; i < n;++i ) {
		cin >> a[i];
	}
	int ans = INT_MAX, b = 0, c =0;
	for(int i= 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			if (i != j && (abs(i - j) == 1 || abs(i - j) == n - 1) && abs(a[i] - a[j]) < ans) {
				b = i + 1;
				c = j + 1;
				ans = abs(a[i] - a[j]);
			}
		}
	}
	cout << b << " " << c << "\n";
}
