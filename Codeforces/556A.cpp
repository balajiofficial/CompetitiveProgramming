#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string a;
	cin >> a;
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		if (a[i] != '0')
			++ans;
	}
	cout << abs(ans - (n - ans)) << "\n";
}
