#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, k;
	cin >> n >> k;
	int ans =0;
	for(int i = 0; i < n; ++i) {
		int a;
		cin>> a;
		if (a + k <= 5)
			++ans;
	}
	cout << ans/3 << "\n";
}
