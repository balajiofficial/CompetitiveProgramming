#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int ans =0;
	while(n--) {
		string a;
		cin >> a;
		if (a=="X++"||a=="++X")
			++ans;
		else
			--ans;
	}
	cout << ans << "\n";
}
