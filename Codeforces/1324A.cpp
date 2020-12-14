#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		bool a = 0, b = 0;
		for(int i= 0 ;i < n; ++i) {
			int c;
			cin >> c;
			if (c % 2)
				a = 1;
			else
				b = 1;
		}
		cout << (a&&b? "NO\n":"YES\n");
	}
}
