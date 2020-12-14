#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int c1 = 0,c2 = 0;
	for(int i = 0; i < n; ++i) {
		int a, b;
		cin >>a  >> b;
		if (a == 1)
			++c1;
		if (b==1)
			++c2;
	}
	int ans = min(c1, n - c1);
	ans += min(c2, n - c2);
	cout << ans << "\n";
}
