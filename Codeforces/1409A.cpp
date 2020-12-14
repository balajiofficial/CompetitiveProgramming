#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin>>t;
	while(t--) {
		ll a, b;
		cin >> a >> b;
		if (a < b)
			swap(a,b);
		cout << (a - b)/10 + min((ll)1, (a - b) % 10) << "\n";
	}
}
