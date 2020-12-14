#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int ans = 1;
	int i = 1;
	for(int j= 0; j <n-1; ++j) {
		if (ans + i > n)
			ans = ans + i - n - i;
		cout << ans + i << " ";
		ans += i;
		++i;
	}
	cout << "\n";
}
