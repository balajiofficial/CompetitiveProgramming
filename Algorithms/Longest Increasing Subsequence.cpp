#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[100000];
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	int lis[1000000];
	for(int i = 0; i <n; ++i) {
		lis[i] =1;
	}
	for(int i= 0; i < n; ++i) {
		for(int j = 0; j < i; ++j) {
			lis[i] = max(lis[i], lis[j] + 1);
		}
	}
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		ans = max(ans, lis[i]);
	}
	cout << ans << "\n";
}
