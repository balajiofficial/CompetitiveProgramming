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
	sort(a, a+n);
	for(int i = 0; i < n; ++i) {
		if (a[i] != a[0]) {
			cout << a[i] << "\n";
			return 0;
		}
	}
	cout << "NO\n";
}
