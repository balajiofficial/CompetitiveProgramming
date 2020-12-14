#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[4];
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	sort(a, a+4);
	if (a[0] + a[1] > a[2] || a[1] + a[2] > a[3])
		cout << "TRIANGLE\n";
	else if (a[0] + a[1] == a[2] || a[1] + a[2] == a[3] || a[0] + a[2] == a[3]) {
		cout << "SEGMENT\n";
	} else {
		cout << "IMPOSSIBLE\n";
	}
}
