#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll n, k;
	cin >> n >> k;
	cout << n + k - n % k << "\n";
}
