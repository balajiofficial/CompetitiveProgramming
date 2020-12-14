#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ll n;
	cin >> n;
	cout << n/3 * 2 + min((ll)1, n % 3) << "\n";
}
