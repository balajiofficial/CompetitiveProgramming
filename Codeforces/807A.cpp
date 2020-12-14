#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, low = INT_MAX;
	int ok = 0, res =0;
	cin >> n;
	while(n--) {
		int a, b;
		cin >> a >> b;
		if (a > low) {
			res = 1;
		}
		if (a != b) {
			if (ok) {
				ok += 1;
			} else {
				ok += 1;
			}
		}
		low = a;
	}
	if (ok) {
		cout << "rated\n";
	} else if (res) {
		cout << "unrated\n";
	} else {
		cout << "maybe\n";
	}
}
