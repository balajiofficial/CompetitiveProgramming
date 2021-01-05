#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s, ans;
	cin >> s;
	int a[26];
	memset(a, 0, sizeof(a));
	for(char c : s) {
		a[c - 'a']++;
	}
	char res;
	for(int i = 0; i < 26; ++i) {
		if (a[i] % 2) {
			bool ok = 0;
			for(int j = 25; j > i; --j) {
				if (a[j] % 2) {
					++a[i];
					--a[j];
					ok = 1;
					break;
				}	
			}
			if (ok==0) {
				res = char('a' + i);
				break;
			}
		}
	}
	for(int i = 0; i < 26; ++i) {
		for(int j = 0; j < a[i]/2; ++j) {
			ans += char(i + 'a');
		}
	}
	cout << ans;
	if (s.size()%2) cout << res;
	reverse(ans.begin(), ans.end());
	cout << ans << "\n";
}
