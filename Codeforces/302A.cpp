#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int a = 0, b = 0;
	for(int i =0; i < n; ++i) {
		int c;
		cin >> c;
		if (c == 1)
			++a;
		else
			++b;
	}
	for(int i = 0;i < m; ++i) {
		int e, f;
		cin >> e >> f;
		if ((f - e + 1)%2==0 && (f-e+1)/2<=a&&(f-e+1)/2<=b) {
			cout << 1 << "\n";
		} else {
			cout << 0 << "\n";
		}
	}
}
