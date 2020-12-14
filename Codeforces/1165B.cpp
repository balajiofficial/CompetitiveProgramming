#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[200000];
	for(int i =0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	int k = 1;
	for(int i= 0; i < n; ++i) {
		if (a[i] >= k) {
			++k;
		}
	}
	cout << k - 1 << "\n";
}
