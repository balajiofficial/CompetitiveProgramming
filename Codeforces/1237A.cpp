#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);	
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		if (a % 2 == 0) {
			cout << a/2 << "\n";
		} else {
			if (ans % 2 == 0) {
				++ans;
				if (a < 0) {
					cout << (a + 1)/2 << "\n";
				} else {
					cout << a/2 + 1 << "\n";
				}
			} else {
				++ans;
				if (a < 0) {
					cout << (a - 1)/2 << "\n";
				} else {
					cout << a/2 << "\n";
				}
			}
		}
	}
}
