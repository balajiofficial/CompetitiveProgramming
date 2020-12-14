#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin >> k;
	k *= 2;
	map<int, int> a;
	for(int i =0; i < 4; ++i) {
		for(int j = 0; j < 4; ++j) {
			char b;
			cin >> b;
			if (b >= '0' && b <= '9')
			++a[b - '0'];
		}
	}
	for(auto e : a) {
		if (e.second > k) {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
}
