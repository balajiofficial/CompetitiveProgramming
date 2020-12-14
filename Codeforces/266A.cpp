#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	string a;
	cin >> a;
	int ans =0;
	for(int i = 0; i < a.size(); ++i) {
		if (a[i] == a[i + 1]) {
			++ans;
			a.erase(a.begin()+(i + 1));
			i -= 1;
		}
	}
	cout << ans << "\n";
}
