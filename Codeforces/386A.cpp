#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, high = 0, ind = 0;
	cin >> n;
	int a[1000];
	for(int i = 0;i < n; ++i) {
		cin >> a[i];
		if (a[i] > high) {
			high = a[i];
			ind = i;
		}
	}
	sort(a, a+n, greater<int>());
	cout << ind + 1 << " " << a[1] << "\n";
}
