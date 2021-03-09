#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, n;
	cin >> a >> b >> n;
	int res = a;
	for(int i = 0; i < 10; ++i) {
		if ((a * 10 + i) % b == 0) {
			a = a * 10 + i;
			break;
		}
	}
	if (res == a) {
		cout << -1 << "\n";
		return 0;
	}
	cout << a;
	for(int i = 0; i < n - 1; ++i) {
		cout << 0;
	}
	cout << "\n";
}
