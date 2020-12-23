#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll a[7];
	for(int i = 0; i < 7; ++i) {
		cin >> a[i];
	}
	sort(a, a+7);
	cout << a[0] << " " << a[1] << " " << a[6] - a[0] - a[1] << "\n";
}