#include<bits/stdc++.h>

using namespace std;

#define ll long long 
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		bool a[100000];
		memset(a, 0, sizeof(a));
		while(n--) {
			int b;
			cin >> b;
			a[b] = 1;
		}
		for(int i = 1; i <= 10000; ++i) {
			if (a[i] == 0) {
				a[i] = 1;
				--x;
			}
			if (x < 0) {
				cout << i - 1 << "\n";
				break;
			}
		}
	}
}
