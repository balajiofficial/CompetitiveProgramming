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
		bool ok = 1;
		for(int i = 0; i < n&&ok; ++i) {
			for(int j = 0; j < n&&ok; ++j) {
				for(int l = 0; l < n&&ok; ++l) {
					if (i* 3 + j * 5 + l * 7 == n) {
						cout << i << " " << j << " " << l << "\n";
						ok = 0;
					}
				}
			}
		}
		if (ok)
			cout << "-1\n";
	}
}
