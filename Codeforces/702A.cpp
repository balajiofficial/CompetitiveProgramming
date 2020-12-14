#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int a[100000];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int ans=0, len =1;
	for(int i =1; i < n; ++i) {
		if (a[i] > a[i - 1]){
			++len;
		} else {
			ans = max(ans, len);
			len = 1;
		}
	}
	ans = max(ans, len);
	cout << ans << "\n";
}
