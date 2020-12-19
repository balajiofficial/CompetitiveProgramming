#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("cbarn.out");
	ifstream cin ("cbarn.in");
	int n;
	cin >> n;
	int a[1000];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int ans = INT_MAX;
	for(int i = 0; i < n; ++i) {
		int temp = 0;
		for(int j = 0; j < n; ++j) {
			if (j == i) {
				temp += 0;
			} else if (j < i) {
				temp += (n - (i + 1) + (j + 1)) * a[j];
			} else {
				temp += (j - i) * a[j];
			}
		}
		ans = min(ans, temp);
	}
	cout << ans << "\n";
}
