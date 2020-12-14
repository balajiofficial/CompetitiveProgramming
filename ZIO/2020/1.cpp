#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int s, ans = 0;
	cin >> s;
	for(int i = s * -2; i <= s *2; ++i) {
		for(int j = s * -2; j <= s * 2; ++j) {
			if (abs(i) + abs(j) <= s) {
				++ans;
			}
		}
	}
	cout << ans << "\n";
}
