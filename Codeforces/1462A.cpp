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
		vector<int> a(n), b(n);
		int c = 0, d = n - 1;
		for(int i = 0; i <n ; ++i) {
			cin >> a[i];
		}
		int i = 0;
		while(i < n) {
			if (i % 2 == 0) {
				b[i] = a[c];
				++c;
			} else {
				b[i] = a[d];
				--d;
			}
			++i;
		}
		for(int i: b) {
			cout << i << " " ;
		}
		cout << "\n";
	}
}
