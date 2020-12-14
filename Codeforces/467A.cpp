#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int ans =0;
	for(int i = 0; i < n;++i) {
		int a, b;
		cin >> a >> b;
		if(b - a > 1)
			++ans;
	}
	cout << ans << "\n";
}
