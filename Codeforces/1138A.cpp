#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>> n;
	int pre = 0, temp = 0, sum = 0, ans = 0;
	for(int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		if (a == pre) {
			if (a == 1)
				++sum;
			else
				++temp;
		} else {
			if (a == 1)
				sum = 1;
			else
				temp = 1;
			pre = a;
		}
		ans = max(ans, min(temp, sum) * 2);
	}
	cout << ans <<"\n";
}
