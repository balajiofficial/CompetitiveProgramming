#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	char a;
	int b;
	cin >> a >> b;
	int ans = 8;
	if (a == 'a' || a=='h')
		ans -= 3;
	if (b == 8 || b == 1)
		ans -= 3;
	if ((a == 'a' || a == 'h') && (b == 1 || b == 8))
		cout << 3 << "\n";
	else
		cout << ans << "\n";
}
