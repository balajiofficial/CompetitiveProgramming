#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int ans =0;
	int a[100];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	for(int i= 0; i < n; ++i) {
		if (a[i] != -1) {
			++ans;
			for(int j = i + 1; j < n; ++j) {
				if (a[j] % a[i] == 0)
					a[j] = -1;
			}
		}
	}
	cout << ans << "\n";
}
