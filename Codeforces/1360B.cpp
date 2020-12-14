#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[50];
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		int low = INT_MAX;
		sort(a, a+n, greater<int>());
		for(int i =0; i < n; ++i) {
			if (i != 0)
				low = min(low, a[i -1] - a[i]);
		}
		cout << low << "\n";
	}
}
