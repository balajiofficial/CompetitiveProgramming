#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int b, k;
	cin >> b >> k;
	vector<int> a(k);
	for(int i = 0; i < k; ++i ) {
		cin >> a[i];
	}
	int p = 1, s = 0;
	for(int i = k - 1; i >= 0; --i) {
		s = (s + p * a[i]) % 2;
		p *= b % 2;
	}
	cout << (s % 2 ? "odd" : "even") << "\n";
}
