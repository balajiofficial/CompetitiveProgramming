#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int ans = n;
	for(int i = 0; i < n; ++i) {
		for(int j = i + 1; j < n; ++j) {
			int sum = 0;
			for(int k = i; k <=j; ++k) {
				sum += a[k];
			}
			if (sum % (j - i + 1) == 0) {
				sum /= (j -i + 1);
				for(int k = i; k <= j; ++k) {
					if (a[k] == sum) {
						++ans;
						break;
					}
				}
			}
		}
	}
	cout << ans << "\n";
}