#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int one = 0, two = 0;
	for(int i= 0;i < n; ++i) {
		int a;
		cin >> a;
		if (a ==1)
			++one;
		else
			++two;
	}
	if (one == 0) {
		cout << "0\n";
		return 0;
	}
	int ans = min(two, one);
	if (one > two) {
		one -= two;
		ans += one/3;
	}
	cout << ans << "\n";
}
