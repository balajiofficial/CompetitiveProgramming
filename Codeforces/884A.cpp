#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, t;
	cin >> n >> t;
	int ans =0;
	int a[100];
	for(int i =0; i < n; ++i) {
		cin >> a[i];
	}
	int time = 0;
	for(int i =0;i < n; ++i) {
		++time;
		ans += 86400 - a[i];
		if (ans >= t)
			break;
	}
	cout << time << "\n";
}
