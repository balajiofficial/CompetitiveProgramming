#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int ans = n;
	for(int i = 1;; ++i) {
		--ans;
		if (ans < 0) {
			cout << i - 1<< "\n";
			break;
		}
		if (i % m == 0) {
			++ans;
		}
	}
}
