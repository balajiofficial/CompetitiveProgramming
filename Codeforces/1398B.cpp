#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		string a;
		cin >> a;
		int j = 0, ans =0;
		bool ok = 1;
		for(int i = 0; i < a.size(); ++i) {
			while(a[i] == '1' && a[j] == '1') {
				++j;
			}
			if (ok) {
				ok = 0;
				ans += j - i + 1;
			} else {
				ok = 1;
			}
			i = j;
		}
		cout << ans << "\n";
	}
}
