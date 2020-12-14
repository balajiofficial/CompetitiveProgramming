#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		for(int i = 0; i < n; ++i) {
			cout << char(i % 3 + 'a');
		}
		cout << "\n";
	}
}
