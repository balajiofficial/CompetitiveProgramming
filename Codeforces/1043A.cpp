#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int sum = 0, high =0;
	for(int i= 0; i < n; ++i) {
		int a;
		cin >> a;
		sum += a;
		high = max(high, a);
	}
	for(int i = high;; ++i) {
		if (i *n - sum > sum) {
			cout << i << "\n";
			return 0;
		}
	}
}
