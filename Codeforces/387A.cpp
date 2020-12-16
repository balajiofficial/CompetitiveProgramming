#include<bits/stdc++.h>

using namespace std;

#define ll long long

int to(string a) {
	int ans = 0;
	int c = pow(10, a.size() - 1);
	for(int i= 0; i < a.size(); ++i) {
		ans += (a[i] - '0') * c;
		c /= 10;
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b, ans;
	cin >> a >> b;
	string x, y;
	x += a[0];
	x += a[1];
	y += b[0];
	y += b[1];
	if (to(x) >= to(y)) {
		ans += to_string(to(x) - to(y));
	} else {
		int c = to(x), d = to(y);
		d -= c;
		ans += to_string(24 - d);
	}
	if (ans.size() == 1) {
		ans = "0" + ans;
	}
	x = "", y = "";
	x += a[3];
	x += a[4];
	y += b[3];
	y += b[4];
	string ans1;
	if (to(x) >= to(y)) {
		ans1 += to_string(to(x) - to(y));
	} else {
		int c = to(x), d = to(y);
		d -= c;
		d = 60 - d;
		if (ans[1] == '0') {
			if (ans[0] == '0') {
				ans[0] = '2';
				ans[1] = '3';
			} else {
				ans[0] -= 1;
				ans[1] = '9';
			}
		} else {
			ans[1] -= 1;
		}
		ans1 += to_string(d);
	}
	if (ans1.size() == 1) {
		ans1 = "0" + ans1;
	}
	cout << ans + ":" + ans1 << "\n"; 
}
