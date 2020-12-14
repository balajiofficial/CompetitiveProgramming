#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[100], ans = 0, ev = 0;
	for(int i = 0; i <n; ++i) {
		cin >> a[i];
		ans += a[i];
		ev += (a[i] % 2 == 0);
	}
	if (ans % 2)
		cout << n - ev << "\n";
	else
		cout << ev << "\n";
}
