#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("circlecross.out");
	ifstream cin ("circlecross.in");
	string a;
	cin >> a;
	int ans= 0;
	for(int i = 0; i < a.size(); ++i) {
		for(int j = i + 1; j < a.size(); ++j) {
			for(int k = j + 1; k < a.size(); ++k) {
				for(int l = k + 1; l < a.size(); ++l) {
					ans += a[i]==a[k]&&a[j]==a[l];
				}
			}
		}
	}
	cout << ans << "\n";
}