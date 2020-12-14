#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int a[4], ans =0;
	for(int i = 0; i < 4; ++i)
		cin>> a[i];
	string b;
	cin >> b;
	for(int i = 0;i <b.size(); ++i) {
		ans += a[b[i] - '1'];
	}
	cout << ans << "\n";
}
