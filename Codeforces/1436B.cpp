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
		int ind = 0;
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < n; ++j) {
				if (j == ind) {
					cout << 1  << " ";
				} else if (j == ind + 1) {
					cout << 1 << " ";
				} else {
					if (ind + 1 >= n && j == 0) {
						cout << 1 << " ";
					} else {
						cout << 0 << " ";
					}
				}
			}
			cout << "\n";
			++ind;
		}
	}
}
