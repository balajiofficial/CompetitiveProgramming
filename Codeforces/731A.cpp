#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	string a;
	cin>> a;
	char current = 'a';
	int ans =0;
	for(int i = 0; i < a.size(); ++i) {
		ans += min(abs(a[i] - current), 26 - abs(a[i] - current));
		current = a[i];
	}
	cout << ans << "\n";
}
