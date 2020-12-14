#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[26];
	memset(a, 0, sizeof(a));
	for(int i = 0; i <n; ++i) {
		string b;
		cin >> b;
		a[b[0] - 'a'] += 1;
	}
	int ans =0;
	for(int i= 0; i < 26; ++i) {
		if (a[i] > 2) {
			int b = a[i]/2;
			int c = a[i]/2 + min(1, a[i] %2);
			ans += (c * (c -1))/2 + (b * (b -1))/2;
		}
	}
	cout << ans << "\n";
}
