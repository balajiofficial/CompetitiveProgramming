#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("lifeguards.out");
	ifstream cin ("lifeguards.in");
	int n;
	cin >> n;
	int s[1000], t[1000];
	int ans[1001];
	memset(ans, 0, sizeof(ans));
	for(int i = 0; i < n; ++i) {
		int b, c;
		cin >> b >> c;
		s[i] = b;
		t[i] = c;
		for(int j = s[i]; j < t[i]; ++j) {
			++ans[j];
		}
	}
	int fin = 0;
	for(int i = 0; i < n; ++i) {
		int temp = 0;
		for(int j = s[i]; j < t[i]; ++j) {
			--ans[j];
		}
		for(int j = 0; j <= 1000; ++j) {
			temp += min(1, ans[j]);
		}
		fin = max(fin, temp);
		for(int j = s[i]; j < t[i]; ++j) {
			++ans[j];
		}
	}
	cout << fin << "\n";
}
