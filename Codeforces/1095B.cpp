#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[100000];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	cout << min(a[n - 1] - a[1], a[n - 2] - a[0]) << "\n";
}
