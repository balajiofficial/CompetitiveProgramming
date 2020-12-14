#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int ans =0;
	int a[1000];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for(int i= 1; i < n - 1; ++i) {
		if (a[i] > a[i- 1] && a[i] > a[i + 1])
			++ans;
		else if (a[i] < a[i - 1] && a[i] < a[i + 1])
			++ans;
	}
	cout << ans << "\n";
}
