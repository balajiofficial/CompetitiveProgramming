#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin>> n;
		int a[100];
		bool b[51];
		for(int i = 1; i <= n; ++i) {
			b[i] = 0;
		}
		for(int i = 0; i < n * 2; ++i) {
			cin >> a[i];
		}
		for(int i = 0; i < 2 *n; ++i) {
			if (b[a[i]] != 1) {
				cout << a[i] << " ";
				b[a[i]] = 1;
			}
		}
		cout << "\n";
	}
}
