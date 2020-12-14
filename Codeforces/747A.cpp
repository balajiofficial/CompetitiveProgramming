#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int ans =1;
	for(int i= 1; i <= n/2; ++i) {
		if (n % i == 0) {
			if (abs(n/i - i) < abs(n/ans - ans)) {
				ans = i;
			}
		}
	}
	cout << min(ans, n/ans) << " " << max(ans, n/ans) << "\n";
}
