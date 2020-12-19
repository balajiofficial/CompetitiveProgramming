#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		double a, b, c;
		cin >> a >> b >> c;
		bool ok1 = a > 50, ok2 = b < 0.7, ok3 = c > 5600;
		if (ok1&&ok2&&ok3) {
			cout << 10 << "\n";
		} else if (ok1&&ok2) {
			cout << 9 << "\n";
		} else if (ok1&&ok3) {
			cout << 7 << "\n";
		} else if (ok2&&ok3) {
			cout << 8 << "\n";
		} else if (ok1||ok2||ok3) {
			cout << 6 << "\n";
		} else {
			cout << 5 << "\n";
		}
	}
}
