#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int high = 0;
	for(int i =0; i < n; ++i) {
		int a;
		cin >> a;
		high =max(high, a);
	}
	cout << max(0, high - 25) << "\n";
}
