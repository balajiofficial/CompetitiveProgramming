#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string a;
	cin >> a;
	for(int i = 0; i < n; ++i) {
		if (count(a.begin(), a.end(), a[i]) > 1) {
			cout << "Yes\n";
			return 0;
		}
	}
	if (n == 1) {
		cout << "Yes\n";
		return 0;
	}
	cout << "No\n";
}
