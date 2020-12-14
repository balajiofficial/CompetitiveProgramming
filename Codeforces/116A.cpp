#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int ans = 0;
	while(n--) {
		int a, b;
		cin >> a >> b;
		ans = max(ans, ans-a+b);
	}
	cout << ans << "\n";
}
