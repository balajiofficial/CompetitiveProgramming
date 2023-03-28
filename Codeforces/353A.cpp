#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int x = 0;
	int xsum = 0, ysum = 0;
	for (int i = 0; i< n; i++) {
		int a, b;
		cin >> a >> b;
		xsum += a;
		ysum += b;
		if (a%2!=b%2) {
			x++;
		}
	}
	if (xsum%2+ysum%2==2) {
		cout << (x>0?1:-1) << "\n";
	}
	if (xsum%2+ysum%2==0) {
		cout << 0 << "\n";
	}
	if (xsum%2+ysum%2==1) {
		cout << -1 << "\n";
	}
}

