#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int sum = 0, ans = 0;
	int n;
	cin >> n;
	int a[100];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		sum += a[i];
	}
	int ind = 0;
	sort(a, a+n, greater<int>());
	for(int i = 0; i < n; ++i) {
		++ind;
		ans += a[i];
		if (ans > sum - ans) {
			break;
		}
	}
	cout << ind << "\n";
}
