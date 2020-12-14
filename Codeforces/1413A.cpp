#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[100];
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		reverse(a, a+n);
		for(int i = 0; i < n; ++i) {
			if (i % 2)
				cout << a[i] << " ";
			else
				cout << a[i] * -1 << " ";
		}
		cout << "\n";
	}
}
