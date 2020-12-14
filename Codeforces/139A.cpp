#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[7];
	for(int i= 0; i < 7; ++i) {
		cin >> a[i];
	}
	int ind = 0, ans = 0;
	while(ans < n) {
		if (ind == 7) {
			ind = 0;
		}
		ans += a[ind];
		++ind;
	}
	cout << ind << "\n";
}
