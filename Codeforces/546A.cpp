#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll k, n, w;
	cin >> k >> n >> w;
	cout << (w * (w + 1))/2 * k - n << "\n";
}
