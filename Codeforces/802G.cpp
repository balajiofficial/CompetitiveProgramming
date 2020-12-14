#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	cin >> a;
	b = "heidi";
	int ans = 0;
	int c = 0;
	for(int i= 0;i < a.size(); ++i) {
		if (a[i] == b[c])
			++ans, ++c;
	}
	if (ans == 5)
		cout << "YES\n";
	else
		cout << "NO\n";
}
