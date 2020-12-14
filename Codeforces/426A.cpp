#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, s;
	cin >> n >> s;
	int sum =0, high =0;
	for(int i =0; i < n; ++i) {
		int a;
		cin >> a;
		sum += a;
		high = max(a,high);
	}
	sum -= high;
	if (sum <= s) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}
