#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("breedflip.out");
	ifstream cin ("breedflip.in");
	int n;
	cin >> n;
	int ans = 0;
	string a, b;
	cin >> a >> b;
	for(int i = 0; i < n; ++i) {
		int j = i;
		while(a[j] != b[j]) {
			++j;
		}
		if (j != i)
			++ans;
		i = j;
	}
	cout << ans << "\n";
}
