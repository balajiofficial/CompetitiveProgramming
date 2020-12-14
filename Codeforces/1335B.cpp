#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, a, b;
		cin >> n >> a >> b;
		for(int i = 1; i <= n; ++i) {
			cout << (char)(i % b + 'a');
		}
		cout <<"\n";
	}
}
