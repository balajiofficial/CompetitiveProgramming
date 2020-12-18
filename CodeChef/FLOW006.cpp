#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		string a;
		cin >> a;
		int ans= 0;
		for(char c : a) {
			ans += c - '0';
		}
		cout << ans << "\n";
	}
}
