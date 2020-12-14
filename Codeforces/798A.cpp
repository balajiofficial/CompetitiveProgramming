#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	int ans = 0;
	for(int i = 0; i < a.size()/2; ++i) {
		if (a[i] != a[a.size() - 1 - i]) {
			++ans;
		}
	}
	if (ans == 1 || (ans == 0 && a.size() %2  == 1)) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}
