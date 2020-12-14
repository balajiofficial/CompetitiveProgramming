#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll n, k;
	cin >> n >> k;
	for(int i = 0; i < k; ++i) {
		if (n % 10 ==0)
			n /= 10;
		else
			n -= 1;
	}
	cout << n << "\n";
}
