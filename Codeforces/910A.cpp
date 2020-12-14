#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, d;
	cin >> n >> d;
	string a;
	cin >> a;
	int ans = 0;
	for(int i=0; i < n; ++i) {
		int b = -1;
		for(int j = i +1; j < n; ++j) {
			if (a[j] == '1' && j - i <= d)
				b = max(b, j);
		}
		if (b == -1) {
			cout << "-1\n";
			return 0;
		} else {
			++ans;
			i = b - 1;
		}
		if (i == n - 2)
			break;
	}
	cout  << ans << "\n";
}
