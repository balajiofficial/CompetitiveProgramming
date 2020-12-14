#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int ans =0, low = INT_MAX, high = 0;
	for(int i = 0; i < n; ++i) {
		int b;
		cin >> b;
		if (i == 0) {
			low = b;
			high = b;
		}
		if (b > high) {
			high = b;
			++ans;
		}
		if (b < low) {
			++ans;
			low = b;
		}
	}
	cout << ans << "\n";
}
