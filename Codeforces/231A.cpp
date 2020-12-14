#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int ans = 0;
	while(n--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a + b + c > 1)
			ans++;
	}
	cout << ans << "\n";
}
