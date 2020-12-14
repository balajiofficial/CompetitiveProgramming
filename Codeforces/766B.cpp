#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[100000];
	for(int i =0; i <n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	for(int i = 2; i < n; ++i) {
		if (a[i - 1] + a[i - 2] > a[i]) {
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
}
