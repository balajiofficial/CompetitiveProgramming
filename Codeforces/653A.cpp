#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	set<int> a;
	for(int i = 0; i < n; ++i) {
		int b;
		cin >> b;
		a.insert(b);
	}
	int res1 = 0, res2 = 0;
	for(int num : a) {
		if (res1 != 0 && res2 != 0) {
			if (res1 - res2 == 1 && num - res1 == 1) {
				cout << "YES\n";
				return 0;
			}
		}
		res2 = res1;
		res1 = num;
	}
	cout << "NO\n";
}
