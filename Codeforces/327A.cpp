#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, n1 = 0;
	cin >> n;
	int a[100];
	for (int i= 0 ;i < n;i++) {
		cin >> a[i];
		if (a[i] == 1) {
			n1++;
		}
	}
	int ans = -1e9;
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = i; j < n; j++) {
			if (a[j] == 0) {
				count += 1;
			} else {
				count -= 1;
			}
			if (count > ans) {
				ans = count;
			}
		}
	}
	cout << n1+ans << "\n";
}

