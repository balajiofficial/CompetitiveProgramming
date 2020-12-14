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
		ans += a;
	}
	int fin = 0;
	for(int i = 1; i <= 5; ++i) {
		if ((ans + i) % (n + 1) != 1) {
			++fin;
		}
	}
	cout << fin << "\n";
}
